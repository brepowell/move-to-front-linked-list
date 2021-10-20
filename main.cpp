//just to test things
//#include "LinkedList.h"
#include "MTFList.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

   MTFList test; //create a MTFList object named "test"
   cout << "Current size is: " << test.getCurrentSize() << endl;
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;
   test.add(3);
   test.add(6);
   test.add(8);
   test.add(2);
   test.add(9); //this should be the leftmost number, as it was added to the head of the list
   test.printList();
   cout << endl;
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;

   test.contains(6);
   test.printList();
   cout << endl;

   test.contains(9);
   test.printList();
   cout << endl;
   
   test.contains(8);
   test.printList();
   cout << endl;

   test.clear();
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;


   //test for LINKED LIST:
   /*
   LinkedList test; //create a LinkedList object named "test"
   cout << "Current size is: " << test.getCurrentSize() << endl;
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;
   test.add(3);
   test.add(6);
   test.add(8);
   test.add(2);
   test.add(9); //this should be the leftmost number, as it was added to the head of the list
   test.printList();
   cout << endl;
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;

   test.remove(6);
   test.printList();
   cout << endl;
   
   test.clear();
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;
   */

}//end main