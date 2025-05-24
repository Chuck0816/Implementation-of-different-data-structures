#include "SinglyLinkedList.hpp"
SinglyLinkedList::SinglyLinkedList() : head_(nullptr), tail_(nullptr){};

SinglyLinkedList::~SinglyLinkedList() {
    while(head_) {
        Node* next = head_->next;
        delete head_;
        head_ = next;
    }
}

void SinglyLinkedList::PushBack(int value) {
    Node* new_node = new Node(value);
    if (tail_ == nullptr) {
        head_ = tail_ = new_node;
    } else {
        tail_ -> next = new_node;
        tail_ = new_node;
    }
}



void SinglyLinkedList::PrintList() const{
// note that we are unable to change head_ since head_ is part of private members. Also, const means it cannot change the private members
Node* current = head_;
    while(current) {
        std::cout<<current->value<<std::endl;
        current = current-> next;
    }
    std::cout << "nullptr" << std::endl; // Indicate the end of the list
}