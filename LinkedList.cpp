// Created by Breanna Powell
// 2021 10 17

//** LinkedList */
#include <iostream>
#include "IList.h"
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList()
   : head(nullptr), listSize(0)
{
   //????Ask about the struct:
   Node::Node()
   {
      data = 0;
      next = nullptr;
   }

   head = nullptr;
   curr = nullptr;
   prev = nullptr;


}

//????Ask about copy constructor
LinkedList::LinkedList(const LinkedList& oldList)
   : //items to initialize
{

}

LinkedList::~LinkedList()
{

}

int LinkedList::getCurrentSize(){
   return listSize;
}

bool LinkedList::isEmpty(){
   if (listSize == 0)
   return true;
}

bool LinkedList::add(int anEntry){   
   
   Node* n = new Node; //Create a new node 
   n->next = nullptr; //initialize next to nullptr
   n->data = anEntry; //initialize data to anEntry

   if(head != nullptr){
      curr = head;
      //traverse to the end of the list
      while(curr->next != nullptr){
         curr = curr->next;
      }
      curr->next = n;
   }
   listSize++;
}

bool LinkedList::remove(int anEntry){
   Node* delEntry = nullptr;
   prev = head;
   curr = head;
   //traverse the list until the entry is found
   while (curr != nullptr && curr->data != anEntry){
      prev = curr;
      curr = curr->next;
   }

   if (curr == null){
      return false;
   }
   else {
      delEntry = curr;
      curr = curr->next;
      prev->next = curr;
   }
}

void LinkedList::printList(){
   curr = head;
   while(curr != nullptr){
      cout << curr->data << endl;
      curr = curr->next;
   }
}


//void LinkedList::clear();
//bool LinkedList::contains(int anEntry);
//int LinkedList::getTraverseCount();
//void LinkedList::resetTraverseCount();
