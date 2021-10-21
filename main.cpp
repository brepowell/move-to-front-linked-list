//just to test things
//#include "LinkedList.h"
#include "MTFList.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
//test

   MTFList test; //create a MTFList object named "test"
   //test getCurrentSize()
   cout << "Current size is: " << test.getCurrentSize() << endl;
   //test isEmpty()
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;
   //test add(anEntry)
   test.add(3);
   test.add(6);
   test.add(8);
   test.add(2);
   test.add(9); //this should be the leftmost number, as it was added to the head of the list
   //test printList()
   test.printList();
   cout << endl;
   
   cout << "Current size is: " << test.getCurrentSize() << endl;
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;

   //test contains()
   
   cout << "Does the list contain 6? (true is 1, false is 0): " 
        << test.contains(6) <<endl; // list should change
   test.printList();
   cout << endl;
   //getTraverseCount()
   cout << "The traverse count is: " << test.getTraverseCount() <<endl;
   test.resetTraverseCount();

   cout << "Does the list contain 9? (true is 1, false is 0): " 
        << test.contains(9) <<endl; // list should change
   test.printList();
   cout << endl;
   //getTraverseCount()
   cout << "The traverse count is: " << test.getTraverseCount() <<endl;
   test.resetTraverseCount();
   
      cout << "Does the list contain 8? (true is 1, false is 0): " 
        << test.contains(8) <<endl; // list should change //list should change
   test.printList();
   cout << endl;
   //getTraverseCount()
   cout << "The traverse count is: " << test.getTraverseCount() <<endl;
   test.resetTraverseCount();

   //test clear()
   test.clear();
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;
   cout << "What was the traverse count? " << test.getTraverseCount() << endl;


}//end main