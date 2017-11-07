/*
 * LinkedList.cpp
 */

#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() : LNode.data_{0}
{
LNode.next_= new LNode[5];
LNode.prev_= new LNode[5];
}

LinkedList::LinkedList(const LinkedList& other)
{
	LNode.data_ = other.LNode.data_;
	LNode.next_ = other.LNode.next_;

}

LinkedList::LinkedList(LinkedList&& other)
{
	// TODO: complete me
}

LinkedList::~LinkedList() {
	// TODO: complete me
}

void LinkedList::push_back(int val) {
	// TODO: complete me
}

void LinkedList::push_front(int val) {
	// TODO: complete me
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
	// TODO: complete me
	return false;
}

void LinkedList::clear() {
	// TODO: complete me
}

