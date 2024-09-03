#include "RBTree.h"


enum class ConsoleColor
{
    BLACK = 0,
    RED = FOREGROUND_RED,
    GREEN = FOREGROUND_GREEN,
    BLUE = FOREGROUND_BLUE,
    YELLOW = RED | GREEN,
    WHITE = RED | GREEN | BLUE,
};


void SetCursorColor(ConsoleColor Color)
{
    HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
    ::SetConsoleTextAttribute(output, static_cast<SHORT>(Color));
}


void SetCursorPosition(int x, int y)
{
    HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
    ::SetConsoleCursorPosition(output, pos);
}


template<typename T>
inline RBinarySearchTree<T>::RBinarySearchTree()
{
    _nil = new Node<T>();
    _root = _nil;
}

template<typename T>
inline RBinarySearchTree<T>::~RBinarySearchTree()
{
}

template<typename T>
inline void RBinarySearchTree<T>::insertFixUp(Node<T>* In_node)
{
    // 1) p = red, uncle = red
    // -> p = black, u = black, pp = red
    // 
    // 2) p = red, uncle = black (triangle)
    // -> Rotate를 통해 case 3으로 바꿈
    // 
    // 3) p = red, uncle = black (list)
    // -> 색상 변경 + 회전


    //           [pp(B)]
    //      [p(R)]     [u(R)]
    //  [n(R)]

    while (In_node->_parent->_color == Color::Red)
    {
        if (In_node->_parent == In_node->_parent->_parent->_left)
        {
            Node<T>* uncle = In_node->_parent->_parent->_right;

            //           [pp(B)]
            //      [p(R)]     [u(R)]
            //  [n(R)]

            if (uncle->_color == Color::Red)
            {
                In_node->_parent->_color = Color::Black;         //p
                uncle->_color = Color::Black;                    //u
                In_node->_parent->_parent->_color = Color::Red;  //pp

                In_node = In_node->_parent->_parent;
            }
            else
            {
                // Triangle------------------------------------
                //           [pp(B)]
                //      [p(R)]     [u(B)]
                //          [n(R)]
        
                if (In_node == In_node->_parent->_right) 
                {
                    In_node = In_node->_parent;
                    LeftRotate(In_node);
                    // case3 로 만들어버림
                }
                // List------------------------------------
                //           [pp(B)]
                //      [p(R)]     [u(B)]
                // [n(R)]

                //           [p(B)]
                //      [n(R)]     [pp(R)]
                //                      [u(B)]

                In_node->_parent->_color = Color::Black;
                In_node->_parent->_parent->_color = Color::Red;
                RightRotate(In_node->_parent->_parent);

            }


        }
        else // (In_node->_parent == In_node->_parent->_parent->_right)
        {
            Node<T>* uncle = In_node->_parent->_parent->_left;

            //           [pp(B)]
            //      [u(R)]     [p(R)]
            //                      [n(R)]

            if (uncle->_color == Color::Red)
            {
                In_node->_parent->_color = Color::Black;         //p
                uncle->_color = Color::Black;                    //u
                In_node->_parent->_parent->_color = Color::Red;  //pp

                In_node = In_node->_parent->_parent;
            }
            else
            {
                // Triangle------------------------------------   

                 //           [pp(B)]
                 //      [u(B)]      [p(R)]
                 //              [n(R)]

                if (In_node == In_node->_parent->_left)
                {
                    In_node = In_node->_parent;
                    RightRotate(In_node);
                    // case3 로 만들어버림
                }
                // List------------------------------------
                //           [pp(B)]
                //      [u(B)]      [p(R)]
                //                       [n(R)]

                //               [p(B)]
                //          [pp(R)]     [n(R)]
                //      [u(B)]

                In_node->_parent->_color = Color::Black;
                In_node->_parent->_parent->_color = Color::Red;
                LeftRotate(In_node->_parent->_parent);

            }


        }

    }

    _root->_color = Color::Black;

}



template<typename T>
void RBinarySearchTree<T>::insert(int In_key)
{
    Node<T>* newNode = new Node<T>();
    newNode->_key = In_key;

    Node<T>* node = _root;     // 비교하는 노드
    Node<T>* parent = _nil; // 내가 어디서 왔는지 표시

    while (node != _nil)
    {
        // 다음 비교할 노드 결정 후, 계속 내려가기
        parent = node;
        if (In_key < node->_key)
        {
            node = node->_left; 
        }
        else
        {
            node = node->_right;
        }
    }

    // 최종 정착

    newNode->_parent = parent;

    if (parent == _nil)
    {
        _root = newNode;
    }
    else if (In_key < parent->_key)
    {
        parent->_left = newNode;
    }
    else
    {
        parent->_right = newNode;
    }

    // 검사
    newNode->_left = _nil;
    newNode->_right = _nil;
    newNode->_color = Color::Red;

    insertFixUp(newNode);
}

template<typename T>
inline void RBinarySearchTree<T>::Delete(int In_key)
{
    Node<T>* deleteNode = Search(_root, In_key);
    Delete(deleteNode);
}

template<typename T>
inline void RBinarySearchTree<T>::Delete(Node<T>* In_node)
{
    if (In_node == _nil)
    {
        return;
    }

    if (!In_node->_left)
    {
        Replace(In_node, In_node->_right);
    }
    else if (!In_node->_right)
    {
        Replace(In_node, In_node->_left);
    }
    else
    {
        // 다음 데이터 찾기
        Node<T>* next = Next(In_node);
        In_node->_key = next->_key;
        Delete(next);
    }

}


template<typename T>
inline void RBinarySearchTree<T>::Print(Node<T>* node, int x, int y)
{
    if (node == _nil)
    {
        return;
    }

    SetCursorPosition(x, y);

    if (node->_color == Color::Black)
    {
        SetCursorColor(ConsoleColor::BLUE);
    }
    else
    {
        SetCursorColor(ConsoleColor::RED);
    }

    cout << node->_key;
    Print(node->_left, x - (5 / (y + 1)), y + 1);
    Print(node->_right, x + (5 / (y + 1)), y + 1);

    SetCursorColor(ConsoleColor::WHITE);

}

template<typename T>
inline Node<T>* RBinarySearchTree<T>::Search(Node<T>* In_node, int In_key)
{
    if (In_node == _nil || In_key == In_node->_key)
    {
        return In_node;
    }

    if (In_key < In_node->_key)
    {
        return Search(In_node->_left, In_key);
    }
    else 
        return Search(In_node->_right, In_key);

    
}

template<typename T>
inline Node<T>* RBinarySearchTree<T>::Min(Node<T>* In_node)
{
    if (In_node == _nil)
    {
        return In_node;
    }

    while (In_node->_left != _nil)
    {
        In_node = In_node->_left;
    }

    return In_node;
}

template<typename T>
inline Node<T>* RBinarySearchTree<T>::Max(Node<T>* In_node)
{
    if (In_node == _nil)
    {
        return In_node;
    }

    while (In_node->_right != _nil)
    {
        In_node = In_node->_right;
    }

    return In_node;
}

template<typename T>
inline Node<T>* RBinarySearchTree<T>::Next(Node<T>* In_node)
{
    if (In_node->_right != _nil)
    {
        return Min(In_node->_right);
    }

    Node<T>* parent = In_node->_parent;

    while (parent != _nil && In_node == parent->_right)
    {
        In_node = parent;
        parent = parent->_parent;
    }

    return parent ;
}


// u 서브트리를 v 서브트리로 교체, u 삭제
template<typename T>
inline void RBinarySearchTree<T>::Replace(Node<T>* u, Node<T>* v)
{
    // 지금 노드가 최고부모이다
    if (!u->_parent)
    {
        _root = v;
    }
    else if (u == u->_parent->_left)
    {
        u->_parent->_left = v;
    }
    else
    {
        u->_parent->_right = v;
    }

    if (v)
        v->_parent = u->_parent;

    delete u;

}

template<typename T>
inline void RBinarySearchTree<T>::LeftRotate(Node<T>* x)
{
    //          [p]
    //        [x]
    //    [1]     [y]
    //          [2] [3]
    //----------ㅜ-----------
    //          [p]
    //        [y]
    //    [x]     [3]
    //  [1] [2]
    
    Node<T>* y = x->_right; // [y]

    x->_right = y->_left; // [2]
    if(y->_left != _nil) { y->_left->_parent = x; }


    y->_parent = x->_parent; // [p]
    if (x->_parent == _nil)  // 애초에 x가 root였다면
    {
        _root = y;
    }
    else if (x == x->_parent->_left)
    {
        //      [p]
        //    [x]
        x->_parent->_left = y;
    }
    else
    {
        //      [p]
        //         [x]
        x->_parent->_right = y;
    }
   
    y->_left = x;
    x->_parent = y;
}


template<typename T>
inline void RBinarySearchTree<T>::RightRotate(Node<T>* y)
{
    //        [y]
    //    [x]     [3]
    //  [1] [2]
    //----------ㅜ-----------
    //        [x]
    //    [1]     [y]
    //          [2] [3]

    Node<T>* x = y->_left; // [x]

    y->_left = x->_right; // [2]
    if (y->_right != _nil) { y->_right->_parent = y; }


    x->_parent = y->_parent; // [p]
    if (y->_parent == _nil)  // 애초에 x가 root였다면
    {
        _root = x;
    }
    else if (y == y->_parent->_left)
    {
        //      [p]
        //    [x]
        y->_parent->_left = x;
    }
    else
    {
        //      [p]
        //         [x]
        y->_parent->_right = x;
    }

    x->_right = y;
    y->_parent = x;




}
