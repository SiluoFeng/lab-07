#include "Test.h"

Test::Test()
{}
Test::~Test()
{}

void Test::testIsEmpty()
{
	LinkedListOfInts myList;
  if(myList.isEmpty())
  {
    cout<<"Empty list is empty\n";
  }
  else
  {
    cout<<"isEmpty(): Failed;    Emptylist is not empty!\n";
  }

  for(int i = 0; i < 10; i++)
	{
		myList.addFront(i);
	}
	if(myList.isEmpty())
	{
		cout<<"isEmpty(): Failed\n";
	}
  else
  {
    cout<<"populated list is populated\n";
  }

}

void Test::testSize1()
{
	LinkedListOfInts myList;
	if(myList.size()== 0)
	{
	  cout<<"testSize1(): Passed\n";
	}
	else
	{
		cout<<"testSize1(): Failed\n";
	}
}

void Test::testSize2()
{
	LinkedListOfInts myList;
	int size = myList.size();
	myList.addFront(5);
	if(myList.size() == (size+1))
	{
		cout<<"testSize2():Passed\n";
	}
	else
	{
		cout<<"testSize2():Failed\n";
	}
}

void Test::testSize3()
{
	LinkedListOfInts myList;
	int size = myList.size();
	myList.addBack(5);
	if(myList.size() == (size+1))
	{
		cout<<"testSize3():Passed\n";
	}
	else
	{
		cout<<"testSize3():Failed\n";
	}
}

void Test::testSize4()
{
	LinkedListOfInts myList;
	int size = myList.size();
	for(int i = 0; i < 10; i++)
	{
		myList.addFront(i);
		if(myList.size() != (size+i+1))
		{
			cout<<"testSize4():Failed\n";
		}
	}

		cout<<"testSize4():Passed\n";
}

void Test::testSize5()
{
	LinkedListOfInts myList;
	int size = myList.size();
	for(int i = 0; i < 10; i++)
	{
		myList.addBack(i);
		if(myList.size() != (size+i+1))
		{
			cout<<"testSize5():Failed\n";
		}
	}

	cout<<"testSize5():Passed\n";
}

void Test::testAddFront1()
{
	LinkedListOfInts myList1;
	LinkedListOfInts myList2;

	myList1.addFront(5);
	myList2.addFront(5);

	if(myList1.toVector() == myList2.toVector())
	{
		cout<<"testAddFront1():Passed\n";
	}
	else
	{
		cout<<"testAddFront1():Failed\n";
	}
}

void Test::testAddFront2()
{
	LinkedListOfInts myList;

	for(int i = 0; i < 10; i++)
	{
		myList.addFront(i);
	}

	std::vector<int> myVect = myList.toVector();

	int x = 9;

	for(int i = 0; i < 10; i++)
	{
		if(myVect[i] != x)
		{
			cout<<"testAddFront2():Failed\n";
		}
		x--;
	}

	cout<<"testAddFront1():Passed\n";
}

bool Test::testAddBack1()
{
	LinkedListOfInts myList1;
	LinkedListOfInts myList2;

	myList1.addBack(5);
	myList2.addBack(5);

	if(myList1.toVector() == myList2.toVector())
	{
		cout<<"testAddBack1():Passed\n";
	}
	else
	{
		cout<<"testAddBack1(): Failed\n";
	}
}

bool Test::testAddBack2()
{
	LinkedListOfInts myList;

	for(int i = 0; i < 10; i++)
	{
		myList.addBack(i);
	}

	std::vector<int> myVect = myList.toVector();

	int x = 9;

	for(int i = 0; i < 10; i++)
	{
		if(myVect[i] != x)
		{
			cout<<"testAddBack2(): Failed\n";
		}
		x--;
	}

	cout<<"testAddBack2():Passed\n";
}

bool Test::testRemoveFront1()
{
	LinkedListOfInts myList;
	if(myList.removeFront() == true)
	{
		cout<<"testRemoveFront1():Failed\n";
	}
	else
	{
		cout<<"testRemoveFront1(): Passed\n";
	}
}

bool Test::testRemoveFront2()
{
	LinkedListOfInts myList;

	for(int i = 0; i < 10; i++)
	{
		myList.addFront(i);
	}

	int size = myList.size();

	myList.removeFront();

	if(myList.size() == (size-1))
	{
		cout<<"testRemoveFront2(): Passed\n";
	}
	else
	{
		cout<<"testRemoveFront2():Failed\n";
	}
}

bool Test::testRemoveFront3()
{
	LinkedListOfInts myList1;
	LinkedListOfInts myList2;

	//populate list 1
	for(int i = 0; i < 9; i++)
	{
		myList1.addFront(i);
	}

	//convert list 1 to vector
	vector<int> myVect1 = myList1.toVector();

	//populate list 2
	for(int i = 0; i < 10; i++)
	{
		myList2.addFront(i);
	}

	//convert list 2 to vector
	vector<int> myVect2 = myList2.toVector();

	//remove front element from list 2
	myList2.removeFront();

	//convert the modified list 2 to vector
	std::vector<int> myVect3 = myList2.toVector();

	for(int i = 0; i < 10; i++)
	{
		if(myVect1[i] != myVect2[i])
		{
			cout<<"testRemoveFront3():Failed\n";
		}
	}

	cout<<"testRemoveFront3():Passed\n";
}

bool Test::testRemoveBack1()
{
	LinkedListOfInts myList;
	if(myList.removeBack() == true)
	{
	cout<<"testRemoveBack1():Failed\n";
	}
	else
	{
		cout<<"testRemoveBack1():Passed\n";
	}
}

bool Test::testRemoveBack2()
{
	LinkedListOfInts myList;

	for(int i = 0; i < 10; i++)
	{
		myList.addBack(i);
	}

	int size = myList.size();

	myList.removeBack();

	if(myList.size() == (size-1))
	{
		cout<<"testRemoveBack2():Passed\n";
	}
	else
	{
		cout<<"testRemoveBack2():Failed\n";
	}
}

bool Test::testRemoveBack3()
{
	LinkedListOfInts myList1;
	LinkedListOfInts myList2;

	//populate list 1
	for(int i = 1; i < 10; i++)
	{
		myList1.addFront(i);
	}

	//convert list 1 to vector
	std::vector<int> myVect1 = myList1.toVector();

	//populate list 2
	for(int i = 0; i < 10; i++)
	{
		myList2.addFront(i);
	}

	//convert list 2 to vector
	std::vector<int> myVect2 = myList2.toVector();

	//remove back element from list 2
	myList2.removeBack();

	//convert the modified list 2 to vector
	std::vector<int> myVect3 = myList2.toVector();

	for(int i = 0; i < 10; i++)
	{
		if(myVect1[i] != myVect2[i])
		{
			cout<<"testRemoveBack3():Failed\n";
		}
	}

	cout<<"testRemoveBack3():Passed\n";
}

bool Test::testSearch1()
{
	LinkedListOfInts myList;
	if(myList.search(5))
	{
		cout<<"testSearch1():Failed\n";
	}
	else
	{
		cout<<"testSearch1():Passed\n";
	}
}

bool Test::testSearch2()
{
	LinkedListOfInts myList;
	for(int i = 0; i < 10; i++)
	{
		myList.addFront(i);
	}

	if(myList.search(5))
	{
		cout<<"testSearch1():Passed\n";
	}
	else
	{
		cout<<"testSearch1():Failed\n";
	}
}
