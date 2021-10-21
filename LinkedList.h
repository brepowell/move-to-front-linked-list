// Created by Breanna Powell
// 501 B / FALL
// SID: 0641962
// Due: 2021 10 20

/** ADT LinkedList: IList
    @file LinkedList.h*/
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "IList.h"

class LinkedList : public IList //added
{
public:
   //Default Constructor
   LinkedList();           
   
   //Destructor
   ~LinkedList();

   /** Gets the size of the list
    @return The integer is a count of nodes in the list. */
   int getCurrentSize() const;

   /** Check whether or not the list is empty.
      Look at the listSize variable and make sure it is 0.
    @return True if the list is empty, or false if not. */
   bool isEmpty() const;

   /** Adds a new node to the beginning of the list
    @post  If successful, anEntry is stored at the beginning of the 
      list, and the size of the list increases by 1.
    @param anEntry  The object to be added as an entry.
    @return  True if add is successful, or false if not. */
   bool add(int anEntry);

   /** Removes the first occurrence of a given entry from the list,
       if possible.
    @post  If successful, anEntry is removed from the list
       and the size of the list decreases by 1.
    @param anEntry  The entry to remove.
    @return  True if remove was successful, or false if not. */
   bool remove(int anEntry);

   /** Prints the list
    @post If successful, prints out each entry in the list, one by one */
   void printList() const;

   /** Removes all nodes from this list.
    @post  The list contains no nodes, and the size of the list is 0. */
   void clear();

   /** Tests whether the list contains a given entry.
    @param anEntry  The entry to locate.
    @return  True if list contains anEntry, or false if not. */
   virtual bool contains(int anEntry); //make this virtual or create a new move to front?

   /** Get the count of number of nodes traversed.
    @return  The integer number of nodes traversed since last time the count was reset. */
   int getTraverseCount() const;

   /** Reset the count of nodes traversed to zero. */
   void resetTraverseCount();

protected:
   //Node struct - to build our nodes LinkedList::Node - moved to protected
   struct Node
   {
      int data;
      Node* next;
   }; //important to include the semicolon!!!!
   //Keep track of the number of nodes traversed during the search
   int traverseCount = 0;

   //Keep track of the list size for the isEmpty and getCurrentSize functions 
   int listSize = 0;

   //Create the head pointer and initialize to 0
   Node* head = nullptr;

};//end LinkedList class
#endif