#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int value){
        this->data = value;
        this->next = nullptr;
    } 
};
void traverseLL(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
    cout << std::endl;
}

// Searching in the LL
bool searchLL(struct Node* head, int target){
    while(head != nullptr){
        if(head->data == target) return true;
        head = head->next;
    }
    return false;
}

// finding length of Single LL

int findLength(Node* head){
    int length = 0;
    Node* current = head;
    while(current != nullptr){
        length++;
        current = current->next;
    }
    return length;
}



// Insert in LL
// at beginning

Node* insertAtBeginning( Node* head, int value){
    Node* newnode = new Node(value);
    newnode->next = head;
    head = newnode;
    return head;
}

// insert at end of linked list

Node* insertAtEnd(Node* head, int value){
    Node* newNode = new Node(value);
    if(head == nullptr) return newNode;

    Node* current = head;
    while(current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
    return head;    
}
// insert at specific location

Node* insertAtPosition(Node* head, int pos, int value){
    if(pos < 1) return head;
    Node* newNode = new Node(value);
    if(pos == 1) {
        newNode->next = head;
        return newNode;
    }

    Node* prev = head;
    int count = 1;
    while(count < pos -1 && prev != nullptr){
        prev = prev->next;
        count++;
    }
    if(prev == nullptr) return head;

    newNode->next = prev->next;
    prev->next = newNode;
    return head;
}


int main(){
    Node* head = new Node(20);
    head = insertAtBeginning(head, 10);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    traverseLL(head);
}
