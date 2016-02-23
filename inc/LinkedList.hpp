//
// Created by alexis on 21/02/16.
//

#include "Node.hpp"
#include <math.h>

#ifndef PSP0_LINKEDLIST_HPP
#define PSP0_LINKEDLIST_HPP

class LinkedList {
public:
    LinkedList(); // Constructor Without parameters
    void addData(double number); // Add new Node to the tail of the list
    double popData(); // Return the last element
    double getMean();
    double getVariance();

private:
    int totalNodes = 0;
    Node* head;
    Node* temp;
    double mean = 0;
    double variance = 0;
};


#endif //PSP0_LINKEDLIST_HPP
