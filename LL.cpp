//Single LL declaration

struct Node{
    int data;
    Node* next = nullptr;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
}
// LL travesal

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
        if(head->data == traget) return true;
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
