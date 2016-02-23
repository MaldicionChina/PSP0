//
// Created by alexis on 21/02/16.
//

#include "Node.hpp"

#ifndef PSP0_LINKEDLIST_HPP
#define PSP0_LINKEDLIST_HPP

class LinkedList {
public:
    LinkedList(); // Constructor Without parameters
    void addData(double number); // Add new Node to the tail of the list
    double popData(); // Return the last element

private:
    int totalNumbers;
    Node* head;
    Node* temp;
};


#endif //PSP0_LINKEDLIST_HPP
