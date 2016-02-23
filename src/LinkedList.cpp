//
// Created by alexis on 21/02/16.
//

#include "LinkedList.hpp"

LinkedList::LinkedList() {
    this->head = nullptr;
    this->temp = nullptr;
}

/*
 * Add new data at the end of the list
 */
void LinkedList::addData(double number) {

    Node* nextNewNode = new Node(number);

    if(this->head== nullptr){ // If the list is empty ...
        this->head = nextNewNode;
    }else{ // If the list isn't empty

        // Add the new Node in the final of the list
        this->temp = this->head; // Assign 'temp' = 'head' to go over the last element of the list

        // Go over to the last element of the list
        while(this->temp->getNextNode()!= nullptr){
            this->temp = this->temp->getNextNode();
        }

        this->temp->setNextNode(nextNewNode); // Insert the node of the last of the LinkedList
    }
}

/*
 * Return the last element of the list and detele it
 */
double LinkedList::popData() {

    double valueToPop;

    // If there're more than one Node ... tehn
    if(this->head->getNextNode() != nullptr) {
        this->temp = this->head; // Assign 'temp' = 'head' to go over the last element of the list

        // Go over the list answering if the next of the next list has a null pointer
        while (this->temp->getNextNode()->getNextNode() != nullptr) {
            this->temp = this->temp->getNextNode();
        }

        valueToPop = this->temp->getNextNode()->getData();
        this->temp->setNextNode(nullptr);
    }else{ // If there's just ONE Node... then
        valueToPop = this->head->getData();
        this->head = nullptr;
    }

    return  valueToPop;
}