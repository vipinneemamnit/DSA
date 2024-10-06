#include "DLL.h"

void forwardTraversal(Node* head)
{
	Node* curr = head;
	while (curr != nullptr) {
		cout << curr->data << " ";
		curr = curr->next;
	}
	cout << endl;
}

// Function to traverse the doubly linked list 
// in backward direction
void backwardTraversal(Node* tail) {

    // Start traversal from the tail of the list
    Node* curr = tail;

    // Continue until current node is not null 
    // (end of list)
    while (curr != nullptr) {

        // Output data of the current node
        cout << curr->data << " ";

        // Move to the previous node
        curr = curr->prev;
    }

    // Print newline after traversal
    cout << endl;
}

int findLength(Node* head)
{
    int count = 0;
    for (Node* curr = head; curr != nullptr; curr = curr->next)
        count++;
    return count;
}
