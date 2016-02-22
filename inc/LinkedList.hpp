//
// Created by alexis on 21/02/16.
//

#include "Node.hpp"

#ifndef PSP0_LINKEDLIST_HPP
#define PSP0_LINKEDLIST_HPP

class LinkedList {
public:
    LinkedList(); // Constructor Without parameters
    Node* getHead();

private:
    Node* head;
};


#endif //PSP0_LINKEDLIST_HPP
