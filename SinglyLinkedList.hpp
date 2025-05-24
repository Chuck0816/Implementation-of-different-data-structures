# include <iostream>

struct Node {
    Node* next;
    int value;
    Node(int val) : value(val), next(nullptr){}; // this is a initializor list, a constructor
};


class SinglyLinkedList {
public: 
    SinglyLinkedList();
    ~SinglyLinkedList();
    void PushBack(int value);
    void PrintList() const; //const in c++ guarantees that the function will not change any members in the class

private:
    Node* head_;
    Node* tail_;

};
