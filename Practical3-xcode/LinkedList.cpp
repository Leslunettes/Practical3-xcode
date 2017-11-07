/*
 * LinkedList.cpp
 */

#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() //: LNode.data_{0}
{
    myNode.data_=0;
    myNode.next_=nullptr;
    myNode.prev_=nullptr;
}

LinkedList::LinkedList(const LinkedList& other)
{
    myNode.data_=other.myNode.data_;
    myNode.next_=other.myNode.next_;
    myNode.prev_=other.myNode.prev_;

}

LinkedList::LinkedList(LinkedList&& other)
{
    myNode.data_=other.myNode.data_;
    myNode.next_=other.myNode.next_;
    myNode.prev_=other.myNode.prev_;
    
    other.myNode.data_=0;
    other.myNode.next_=nullptr;
    other.myNode.prev_=nullptr;
    
}

LinkedList::~LinkedList() {
    if (myNode.next_) delete myNode.next_;
    if (myNode.prev_) delete myNode.prev_;
}

void LinkedList::push_back(int val) {
    struct LNode node;
    node.data_=val;
    
    struct LNode nodeToWork = myNode;
    while (nodeToWork.prev_!=nullptr){
        nodeToWork = *nodeToWork.prev_; // Problème de pointeur
    }
    
    nodeToWork.prev_=&node;
    node.next_=&nodeToWork;
}

void LinkedList::push_front(int val) {
    struct LNode node;
    node.data_=val;
    
    struct LNode nodeToWork = myNode;
    while (nodeToWork.next_!=nullptr){
        nodeToWork = *nodeToWork.next_;
    }
    
    nodeToWork.prev_=&node;
    node.prev_=&nodeToWork;
}

void LinkedList::pop_back() {
	// TODO: complete me
}

void LinkedList::pop_front() {
	// TODO: complete me
}

int LinkedList::first() const {
	// TODO: complete me
	return 0;
}

int LinkedList::last() const {
	// TODO: complete me
	return 0;
}

LinkedList& LinkedList::operator=(const LinkedList& other) {
	// TODO: complete me
	return *this;
}

LinkedList& LinkedList::operator=(LinkedList&& other) {
	// TODO: complete me
	return *this;
}

int LinkedList::size() const {
	// TODO: complete me
	return -1;
}

bool LinkedList::empty() const {
    if (myNode.data_!=0){
        return false;
    }
	return true;
}

void LinkedList::clear() {
    myNode.data_=0;
    delete [] myNode.next_;
    myNode.next_=nullptr;
    delete [] myNode.prev_;
    myNode.prev_=nullptr;
}

