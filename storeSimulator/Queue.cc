#include <iostream>
#include <string>
using namespace std;
#include "Queue.h"

Queue::Queue(): head(NULL),tail(NULL) {}

Queue::~Queue(){
    // Node* currNode;
    // Node* nextNode;

    // currNode = head;

    // while (currNode != NULL) {
    //     nextNode = currNode->next;
    //     if (nextNode == tail){
    //         delete tail->data;
    //         delete tail;
    //     }
    //     delete currNode->data;
    //     delete currNode;
    //     currNode = nextNode;
    // }
}
bool Queue::isEmpty(){
    if (head==NULL){
        return true;
    }
    return false;
}
void Queue::peekFirst(WHLocation** loc)
{
    if (head != NULL)
        *loc = head->data;
    else
        *loc = NULL;
}

void Queue::popFirst(WHLocation** loc){
    //Node *prevNode = new Node();
    
    if (head != NULL)
    {
        *loc = head->data;
        if(head->next != NULL){
            head = head->next;
        }
        else
        {
            head = NULL;
            tail = NULL;
        }
    }
    else
        *loc = NULL;

}
void Queue::addLast(WHLocation* loc)
{
    Node *newNode = new Node;
    newNode->data = loc;
    newNode->next = NULL;

    Node* currNode;
    Node* prevNode;
    currNode = head;
    prevNode = NULL;
    
    while (currNode != NULL) {
        // if (newNode->data->getName() < currNode->data->getName())
        //   break;
        prevNode = currNode;
        currNode = currNode->next;
    }

    if (prevNode == NULL)
        head = newNode;
    else
        prevNode->next = newNode;

    newNode->next = currNode;
    tail = newNode;

    //tail->next->data->print();
}

void Queue::print(){
    Node* currNode = head;

    while (currNode != NULL) {
        currNode->data->print();
        currNode = currNode->next;
    }
}