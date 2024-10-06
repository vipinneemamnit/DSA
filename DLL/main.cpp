#include "DLL.h"
int main() {

    // Sample usage of the doubly linked list and 
    // traversal functions
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    cout << "Forward Traversal:" << endl;
    forwardTraversal(head);

    cout << "Backward Traversal:" << endl;
    backwardTraversal(third);
    cout<< findLength(head)<<endl;

    return 0;
}