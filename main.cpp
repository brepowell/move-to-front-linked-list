//just to test things
#include "LinkedList.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   LinkedList test; //create a LinkedList object named "test"
   cout << "Current size is: " << test.getCurrentSize() << endl;
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;
   test.add(3);
   test.add(6);
   test.add(8);
   test.add(2);
   test.add(9); //this should be the leftmost number, as it was added to the head of the list
   test.printList();
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;

   test.remove(6);
   test.printList();
   cout << endl;
   
   test.clear();
   cout << "Is the list empty? (true is 1, false is 0): " << test.isEmpty() <<endl;
}//end main