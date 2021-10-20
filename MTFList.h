// Created by Breanna Powell
// 501 B / FALL
// SID: 0641962
// Due: 2021 10 20

/** ADT MTFList: LinkedList
    @file MTFList.h*/
#ifndef MTFLIST_H
#define MTFLIST_H
#include "LinkedList.h"

class MTFList : public LinkedList
{
public:
   //Default Constructor
   MTFList();           
   
   //Destructor
   ~MTFList();

   /** Tests whether the list contains a given entry.
    Overrides contains from LinkedList.h
    @post If the entry is found, the node is moved to the front of the list.
    @param anEntry  The entry to locate.
    @return  True if list contains anEntry, or false if not. */
   bool contains(int anEntry);

private:
   //Node struct - to build our nodes MTFList::Node
   struct Node
   {
      int data;
      Node* next;
   }; //important to include the semicolon!!!!
   
   //Keep track of the list size for the isEmpty and getCurrentSize functions 
   int listSize = 0;

   //Create the head pointer and initialize to 0
   Node* head = nullptr;

protected:
   //Keep track of the number of nodes traversed during the search
   int traverseCount = 0;

};//end MTFList class
#endif