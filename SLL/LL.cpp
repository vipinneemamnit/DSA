#include"SLL.h"

int main(){

    //single linked list operation
    Node* head = new Node(20);
    head = insertAtBeginning(head, 10);
    insertAtEnd(head, 30);
    insertAtEnd(head, 50);
    insertAtEnd(head, 60);
    traverseLL(head);
    insertAtPosition(head, 4, 40);
    traverseLL(head);
    head = removeFirstNode(head);
    traverseLL(head);
    removeLastNode(head);
    deleteAtPosition(head, 2);
    traverseLL(head);
}
