//just to test things
#include "LinkedList.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   LinkedList test;
   cout << "Current size is: " << test.getCurrentSize() << endl;
   cout << "Is the list empty?" << test.isEmpty() <<endl;
   test.add(3);
   test.add(6);
   //test.add(8);
   //test.add(2);
   //test.add(9);
   test.printList();

   test.remove(6);
   test.printList();

   test.clear();
   cout << "Is the list empty?" << test.isEmpty() <<endl;
}//end main