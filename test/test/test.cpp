#include <iostream>
#include <set>
#include <map>
#include "set.h"

using namespace std;


int main()
{

	//			       100
	//		    50			  150
	//    20	    55
	//  19  45    51
	//    25  46


	kdt::Set<int> Set1;

	Set1.insert(100);
	Set1.insert(150);
	Set1.insert(50);
	Set1.insert(20);
	Set1.insert(55);
	Set1.insert(45);
	Set1.insert(51);
	Set1.insert(19);
	Set1.insert(25);
	Set1.insert(46);

	Set1.print_inorder();

	{
		kdt::Set<int> Set_copy = Set1;
		Set_copy.print_inorder();

		kdt::Set<int> Set_move = move(Set_copy);
		Set_move.print_inorder();

		kdt::Set<int>::iterator It_begin = Set_move.begin(); // 19

		++It_begin; // 20
		++It_begin;
		++It_begin;
		++It_begin;
		++It_begin;
		++It_begin;
		++It_begin;
		++It_begin;
		++It_begin;
	

		--It_begin;
		--It_begin;
		--It_begin;
		--It_begin;
		--It_begin;
		--It_begin;
		--It_begin;
		--It_begin;

	
		cout << "\nBST_Successor 사용한 순회(InOrder) start\n";
		for (It_begin = Set_move.begin(); It_begin != Set_move.end(); ++It_begin)
		{
			cout << *It_begin << " ";

		}
		std::cout << "\nBST_Successor 사용한 순회(InOrder) end\n";


		kdt::Set<int>::iterator It = Set_move.find(50);
		kdt::Set<int>::iterator It_false = Set_move.find(555);

	}

	cout << "\n숙제검사\n";

	Set1.erase(25);
	Set1.print_inorder();






	return 0;
}