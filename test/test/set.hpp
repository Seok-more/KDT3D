
using namespace std;

namespace kdt
{
	template<typename _Ty>
	inline Set<_Ty>::Set(const Set& InOther)
	{
		cout << "\nPre_Tree_Walk_copy_start" << endl;

			Preorder_Tree_Walk(InOther._root,
				[this](Node* x)
				{
					cout << x->_key << " " << endl;
					insert(x->_key); // this에 있는 insert기능을 쓰기위해 this를 캡쳐한 것
				});

		cout << "\nPre_Tree_Walk_copy_end" << endl;
	}

	template<typename _Ty>
	inline Set<_Ty>::Set(Set&& In_move) noexcept
	{
		this->_root = In_move._root;
		In_move._root = nullptr;
	}

	template<typename _Ty>
	inline Set<_Ty>::~Set()
	{
		cout << "\nPost_Tree_Walk_delete_start" << endl;

		Postorder_Tree_Walk(_root,
			[](Node* x)
			{
				cout << x->_key << " " << endl;
				delete x;
			});

		cout << "\nPost_Tree_Walk_delete_end" << endl;
	}

	template<typename _Ty>
	inline  Set<_Ty>::iterator Set<_Ty>::insert(const _Ty& In_key)
	{
		Node* NewNode = new Node(In_key, nullptr, nullptr, nullptr);
		BST_insert(NewNode);
		return iterator(this, NewNode);
	}

	template<typename _Ty>
	inline  Set<_Ty>::iterator Set<_Ty>::find(const _Ty& In_key)
	{
		Node* FindNode = Iterative_Tree_Search(_root, In_key);

		return iterator(this, FindNode);
	}

	template<typename _Ty>
	inline  Set<_Ty>::iterator Set<_Ty>::erase(const _Ty& In_key)
	{
		Node* DeleteNode = Iterative_Tree_Search(_root, In_key);
		Node* SuccessorNode = BST_deletion(DeleteNode);
		return iterator(this, SuccessorNode);
	}

	template<typename _Ty>
	inline  Set<_Ty>::iterator Set<_Ty>::begin()
	{
		Node* temp = _root;
		while (temp->_left)
		{
			temp = temp->_left;
		}

		return iterator(this, temp);
	}

	template<typename _Ty>
	inline  Set<_Ty>::iterator Set<_Ty>::end()
	{
		return iterator(this, nullptr);
	}

	template<typename _Ty>
	inline void Set<_Ty>::print_inorder()
	{
		std::cout << std::endl << "Inorder_Tree_Walk Print start\n";
		Inorder_Tree_Walk(_root, 
			[](Node* x)
			{
				cout << x->_key << " " << endl;
			});

		std::cout << std::endl << "Inorder_Tree_Walk Print end\n";
	}

	template<typename _Ty>
	inline void Set<_Ty>::BST_insert(Node* z)
	{
		Node* y = nullptr;
		Node* x = _root;

		// depth 쌓기
		while (x != nullptr)
		{
			y = x;
			if (z->_key < x->_key)
			{
				x = x->_left;
			}
			else
			{
				x = x->_right;
			}
		}
		z->_parent = y;

		if (y == nullptr)
		{
			_root = z;
		}
		else if (z->_key < y->_key)
		{
			y->_left = z;
		}
		else if (z->_key > y->_key)
		{
			y->_right = z;
		}
		else
		{
			// key 중복 X
			_ASSERT(false);
		}
		

	}

	template<typename _Ty>
	inline Set<_Ty>::Node* Set<_Ty>::Iterative_Tree_Search(Node* x, const _Ty& In_key)
	{
		while (x && In_key != x->_key)
		{
			if (In_key < x->_key)
			{
				x = x->_left;
			}
			else
			{
				x = x->_right;
			}
		}
		return x;
	}

	

	template<typename _Ty>
	inline void Set<_Ty>::Postorder_Tree_Walk(Node* x, std::function<void(Node*)> Function)
	{
		if (x)
		{
			Postorder_Tree_Walk(x->_left,Function);
			Postorder_Tree_Walk(x->_right,Function);
			Function(x);
		}

		return;
	}

	template<typename _Ty>
	inline void Set<_Ty>::Inorder_Tree_Walk(Node* x, std::function<void(Node*)> Function)
	{
		if (x)
		{
			Inorder_Tree_Walk(x->_left, Function);
			Function(x);
			Inorder_Tree_Walk(x->_right, Function);
		}

	}

	template<typename _Ty>
	inline void Set<_Ty>::Preorder_Tree_Walk(Node* x, std::function<void(Node*)> Function)
	{
		if (x)
		{
			Function(x);
			Preorder_Tree_Walk(x->_left, Function);
			Preorder_Tree_Walk(x->_right, Function);
		}
	}

	template<typename _Ty>
	inline Set<_Ty>::Node* Set<_Ty>::BST_Successor(Node* x)
	{
		if (x->_right)
		{
			return BST_Minimum(x->_right);
		}

		Node* y = x->_parent;
		while (y&& x == y->_right)
		{
			x = y;
			y = y->_parent;
		}

		return y;
	}


	template<typename _Ty>
	inline Set<_Ty>::Node* Set<_Ty>::BST_Minimum(Node* x)
	{
		while (x->_left)
		{
			x = x->_left;
		}
		return x;
	}

	template<typename _Ty>
	inline Set<_Ty>::Node* Set<_Ty>::BST_Predecessor(Node* x)
	{
		if (x->_left)
		{
			return BST_Maximum(x->_left);
		}

		Node* y = x->_parent;
		while (y&& x == y->_left)
		{
			x = y;
			y = y->_parent;
		}

		return y;

	}

	template<typename _Ty>
	inline Set<_Ty>::Node* Set<_Ty>::BST_Maximum(Node* x)
	{
		while (x->_right)
		{
			x = x->_right;
		}
		return x;
	}

	template<typename _Ty>
	inline Set<_Ty>::Node* Set<_Ty>::BST_deletion(Node* D)
	{
		Node* returnNode = nullptr;

		if (D->_left == nullptr)
		{
			Shift_nodes(D, D->_right);
		}
		else if (D->_right == nullptr)
		{
			Shift_nodes(D, D->_left);
		}
		else
		{
			Node* E = BST_Successor(D);
			if (E->_parent != D)
			{
				Shift_nodes(E, E->_right);
				E->_right = D->_right;
				E->_right->_parent = E;
			}

			Shift_nodes(D, E);
			E->_left = D->_left;
			E->_left->_parent = E;

			returnNode = E;
		}

		return returnNode;
	}

	template<typename _Ty>
	inline void Set<_Ty>::Shift_nodes(Node* u, Node* v)
	{
		if (u->_parent == nullptr)
		{
			_root = v;
		}
		else if (u = u->_parent->_left)
		{
			u->_parent->_left = v;
		}
		else
		{
			u->_parent->_right = v;
		}

		if (v)
		{
			v->_parent = u->_parent;
		}

	}

	


};
