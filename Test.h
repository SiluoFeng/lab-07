#ifndef TEST_H
#define TEST_H

#include "LinkedListOfInts.h"
#include <iostream>
#include <vector>

using namespace std;

class Test
{
	public:

		Test();
    ~Test();

		void testIsEmpty(); //test isEmpty() on empty list

		void testSize1(); //test size on empty list
		void testSize2(); //test size after adding to front once
		void testSize3(); //test size after adding to back once
		void testSize4(); //test size after multiple adds to front
		void testSize5(); //test size after multiple adds to back

		void testAddFront1(); //test order of list after single addFront
		void testAddFront2(); //test order of list after multiple addFront

		void testAddBack1(); //test order of list after single addBack
		void testAddBack2(); //test order of list after multiple addBack

		void testRemoveFront1(); //test removeFront to return false on empty list
		void testRemoveFront2(); //test removeFront preserving size on populated list
		void testRemoveFront3(); //test order of list after removeFront on populated list

		void testRemoveBack1(); //test removeBack to return false on empty list
		void testRemoveBack2(); //test removeBack preserving size on populated list
		void testRemoveBack3(); //test order of list after removeBack on populated list

		void testSearch1(); //test search on empty list
		void testSearch2(); //test search for value in populated list

};
#endif
