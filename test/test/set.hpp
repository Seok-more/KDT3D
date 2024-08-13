#include "set.h"
namespace kdt
{
	template<typename _Ty>
	inline Set<_Ty>::Set(const Set& InOther)
	{

	}

	template<typename _Ty>
	inline Set<_Ty>::Set(Set&& In_move) noexcept
	{
	}

	template<typename _Ty>
	inline Set<_Ty>::~Set()
	{
	}

	template<typename _Ty>
	inline  Set<_Ty>::iterator Set<_Ty>::insert(const _Ty& In_key)
	{
		return iterator();
	}

	template<typename _Ty>
	inline  Set<_Ty>::iterator Set<_Ty>::find(const _Ty& In_key)
	{
		return iterator();
	}

	template<typename _Ty>
	inline  Set<_Ty>::iterator Set<_Ty>::erase(const iterator& it)
	{
		return iterator();
	}

	template<typename _Ty>
	inline  Set<_Ty>::iterator Set<_Ty>::begin()
	{
		return iterator();
	}

	template<typename _Ty>
	inline  Set<_Ty>::iterator Set<_Ty>::end()
	{
		return iterator();
	}

	template<typename _Ty>
	inline void Set<_Ty>::print_inorder()
	{
	}


};
