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
   /** Tests whether the list contains a given entry.
    Overrides contains from LinkedList.h
    @post If the entry is found, the node is moved to the front of the list.
    @param anEntry  The entry to locate.
    @return  True if list contains anEntry, or false if not. */
   bool contains(int anEntry); //try override here

};//end MTFList class
#endif