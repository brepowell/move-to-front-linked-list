// Created by Breanna Powell
// 501 B / FALL
// SID: 0641962
// Due: 2021 10 20

//** MTFList */
#include <iostream>
#include "LinkedList.h"
#include "MTFList.h"
using namespace std;

//Default Constructor
MTFList::MTFList()
   : head(nullptr), listSize(0)
{
}//end default constructor         

//Destructor
MTFList::~MTFList()
{
   clear(); //inherits clear from LinkedList class
}//end destructor

/** Tests whether the list contains a given entry.
 Overrides contains from LinkedList.h
 @post If the entry is found, the node is moved to the front of the list.
 @param anEntry  The entry to locate.
 @return  True if list contains anEntry, or false if not. */
bool MTFList::contains(int anEntry){
   Node* moveEntry = nullptr; //create a pointer to point to the node to move
   Node* prev = head; //create a pointer to point to the previous node
   Node* curr = head; //create a pointer to point to the current node

   //traverse the list until the entry is found
   while (curr != nullptr && curr->data != anEntry){
      prev = curr;
      curr = curr->next;
      traverseCount++; //increase the count of nodes traversed
   }  

   //if the list is empty, return false
   if (curr == nullptr){
      return false;
   }
   else {
      //Use moveEntry pointer to point to the node to delete
      moveEntry = curr;
      
      curr = curr->next; //move current to the next node
      prev->next = curr; //connect previous where current is now
      moveEntry->next = head; //Link the moved node to the head of the list
      head = moveEntry; //Point the head pointer at the new node
      
      moveEntry = nullptr; //return to memory
      prev = nullptr; //return to memory
      curr = nullptr; //return to memory
      return true;
   } //end if
   

}//end contains