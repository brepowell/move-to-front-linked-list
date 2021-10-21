//just to test things
#include "LinkedList.h"
#include "MTFList.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
//test 
//g++ *.cpp -std=c++11 -g -o test
//./test
   MTFList test; //create a MTFList object named "test"
   //LinkedList test;
   
   //test getCurrentSize()
   cout << "Current size is: " << test.getCurrentSize() << endl;
   //test isEmpty()
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;
   //test add(anEntry)
   test.add(1);
   test.add(2);
   test.add(3);
   test.add(4);
   test.add(5); //this should be the leftmost number, as it was added to the head of the list
   //test printList()
   test.printList();
   cout << endl;
   
   cout << "Current size is: " << test.getCurrentSize() << endl;
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;

   //test contains()
   
   cout << "Does the list contain 3? (true is 1, false is 0): " 
        << test.contains(3) <<endl; // list should change
   test.printList();
   cout << endl;
   //getTraverseCount()
   cout << "The traverse count is: " << test.getTraverseCount() <<endl;
   test.resetTraverseCount();

   cout << "Does the list contain 4? (true is 1, false is 0): " 
        << test.contains(4) <<endl; // list should change
   test.printList();
   cout << endl;
   //getTraverseCount()
   cout << "The traverse count is: " << test.getTraverseCount() <<endl;
   test.resetTraverseCount();
   
      cout << "Does the list contain 5? (true is 1, false is 0): " 
        << test.contains(5) <<endl; // list should change //list should change
   test.printList();
   cout << endl;
   //getTraverseCount()
   cout << "The traverse count is: " << test.getTraverseCount() <<endl;
   test.resetTraverseCount();

   //test clear()
   test.clear();
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;
   cout << "What was the traverse count? " << test.getTraverseCount() << endl;
   cout << "Current size is: " << test.getCurrentSize() << endl;

}//end main