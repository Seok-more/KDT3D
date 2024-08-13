#pragma once
#include <iostream>
#include <functional>

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

	protected:	// 멤버 변수
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

		template<typename _Ty>
		friend class _Set_iterator;

		Set() = default;
		Set(const Set& In_other);		// 복사 생성자
		Set(Set&& In_move) noexcept;
		~Set();

	public: // 메서드
		iterator insert(const _Ty& In_key);
		iterator find(const _Ty& In_key);
		iterator erase(const iterator& it);

		iterator begin();
		iterator end();

		void print_inorder();

	protected: // 메서드 조무사



	protected:
		Node* _root = nullptr;
	};

	//--------------------------------------------------------------------

	template <typename _Ty>
	class iterator_Set
	{
	public: // 생성자, 연산자, 소멸자
		using Node = FNode<_Ty>;

		iterator_Set() = default;
		iterator_Set(const Node* In_node, const Set<_Ty>* In_set)
			: _node(In_node), _set(In_set) {}
		iterator_Set(const iterator_Set& In_other) = default;	// 복사생성자

		iterator_Set& operator=(const iterator_Set& In_other)	// 대입연산자
			= default;
		iterator_Set& operator++()
		{

		}

		iterator_Set& operator--()
		{

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
			
		}
		
		bool operator!=(const iterator_Set& In_other)
		{
		
		}

	public: // 메서드

	public: // 메서드 조무사

	protected:
		Node* _node = nullptr;
		Set<_Ty>* _set = nullptr;
	};
}

#include "set.hpp"	// 구현부는 맨마지막에 넣기