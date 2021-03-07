#include <bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* next;

        explicit node(int val) {
            data=val;
            next=nullptr;
        }
};

void insertAtHead (node* &head, int val) {
    node* n = new node(val);

    n->next = head;
    head = n;
}

void insertAtTail (node* &head, int val) {
    node* n = new node(val);

    if (head == nullptr) {
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = n;
}

node* reverseList(node* head) {
    node* prevPtr = nullptr;
    node* currPtr = head;
    node* nextPtr;

    while (currPtr != nullptr) {
        nextPtr = currPtr -> next;
        currPtr -> next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
}

void display (node* head) {
    node* temp = head;

    while(temp != nullptr) {
        cout<<temp->data<<" "<<"-> ";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main() {
    node* head = nullptr;
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    cout<<endl;
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    display(head);
    cout<<endl;
    display(reverseList(head));
    return 0;
}