//
// Created by alexis on 21/02/16.
//

#ifndef PSP0_NODE_HPP
#define PSP0_NODE_HPP


class Node {
public:
    Node(double number);
    Node* getNextNode();
    double getData();
    void setData(double number);
    int setNextNode(Node* newNode);
private:
    Node* nextNode;
    double data;
};


#endif //PSP0_NODE_HPP
