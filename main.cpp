# include "SinglyLinkedList.hpp"
int main() {
    // Create a singly linked list
    SinglyLinkedList list;

    // Add elements to the list
    list.PushBack(10);
    list.PushBack(20);
    list.PushBack(30);

    // Print the list
    std::cout << "The linked list contains:" << std::endl;
    list.PrintList(); // Expected output: 10 -> 20 -> 30 -> nullptr

    return 0;
}