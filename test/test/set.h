#pragma once
#include <iostream>
#include <functional>
using namespace std;

namespace kdt
{
	// 얘는 뭐 메서드 포함안할, 구조체니까 struct로
	template <typename _Ty>
	struct FNode;

	template <typename _Ty>
	class Set;

	template <typename _Ty>
	class iterator_Set;

	//--------------------------------------------------------------------

	template <typename _Ty>
	struct FNode
	{
	public:	// 생성자, 연산자, 소멸자
		FNode() = default;
		FNode(const _Ty& In_key, FNode* In_parent,
			FNode* In_right, FNode* In_left)
			: _key(In_key), _parent(In_parent), _right(In_right), _left(In_left)
		{}

	public:	// 멤버 변수
		_Ty _key{};
		FNode* _parent = nullptr;
		FNode* _right = nullptr;
		FNode* _left = nullptr;
	};

	//--------------------------------------------------------------------

	template <typename _Ty>
	class Set
	{
	public:	// 생성자, 연산자, 소멸자
		using Node = FNode<_Ty>;
		using iterator = iterator_Set<_Ty>;

		template <typename _Ty>
		friend class iterator_Set;
	
		Set() = default;
		Set(const Set& In_other);		// 복사 생성자
		Set(Set&& In_move) noexcept;
		~Set();

	public: // 메서드
		iterator insert(const _Ty& In_key);
		iterator find(const _Ty& In_key);
		iterator erase(const _Ty& In_key);

		iterator begin();
		iterator end();

		void print_inorder();

	protected: // 메서드 조무사
		void BST_insert(Node* z);
		Node* Iterative_Tree_Search(Node* x, const _Ty& In_key);


		// Tree를 delete 할 때 사용 (자식 -> 부모로 향함)	std::function<반환(인자)> 이름			
		void Postorder_Tree_Walk(Node* x, std::function<void(Node*)> Function);

		// 순서대로 출력할 때 사용
		void Inorder_Tree_Walk(Node* x, std::function<void(Node*)> Function);

		// Tree를 복제할 때 사용 (부모-> 자식으로 향함)
		void Preorder_Tree_Walk(Node* x, std::function<void(Node*)> Function);

		// 후임자 찾기
		Node* BST_Successor(Node* x);
		Node* BST_Minimum(Node* x);

		// 선임자 찾기
		Node* BST_Predecessor(Node* x);
		Node* BST_Maximum(Node* x);

		// **********************************삭제**************************************************
		Node* BST_deletion(Node* D);
		void Shift_nodes(Node* u, Node* v);



	private:
		Node* _root = nullptr;
	};

	//--------------------------------------------------------------------

	template <typename _Ty>
	class iterator_Set
	{
	public: // 생성자, 연산자, 소멸자
		using Node = FNode<_Ty>;

		iterator_Set() = default;
		iterator_Set(Set<_Ty>* In_set, Node* In_node)
			:  _set(In_set), _node(In_node) {}
		iterator_Set(const iterator_Set& In_other) = default;	// 복사생성자

		iterator_Set& operator=(const iterator_Set& In_other)	// 대입연산자
			= default;
		iterator_Set& operator++()
		{
			// Set에서 iterator_Set을 friend 했기때문에, 접근 가능함   
			_node = _set->BST_Successor(_node);
			return *this;
		}

		iterator_Set& operator--()
		{
			_node = _set->BST_Predecessor(_node);
			return *this;
		}

		_NODISCARD _Ty& operator*() const noexcept
		{
			_ASSERT(_node);
			return _node->_key;
		}

		_NODISCARD _Ty& operator->() const noexcept
		{
			_ASSERT(_node);
			return _node->_key;
		}
		
		bool operator==(const iterator_Set& In_other)
		{
			return(_set == In_other._set && _node == In_other._node);
		}
		
		bool operator!=(const iterator_Set& In_other)
		{
			return !(*this == In_other); 
		}

	public: // 메서드

	public: // 메서드 조무사

	protected:
		Set<_Ty>* _set = nullptr;
		Node* _node = nullptr;
		
	};
}

#include "set.hpp"	// 구현부는 맨마지막에 넣기