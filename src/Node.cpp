//
// Created by alexis on 21/02/16.
//

#include "Node.hpp"

Node::Node(double number) {
    this->nextNode = nullptr;
    this->data = number;
}

void Node::setData(double number) {
    this->data = number;
}

double Node::getData() {
    return this->data;
}

Node* Node::getNextNode() {
    return this->nextNode;
}

int Node::setNextNode(Node *newNode) {
    this->nextNode = newNode;
}
