#include<iostream>
using namespace std;

class Node {
    public:
    int num;
    Node* next;

    Node(int data) {
        this->num = data;
        this->next = NULL;
    }
};

void Insert_node_Head(Node* &head, int data) {
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void Insert_node_Tail(Node* &tail, int d) {
    //create a new node

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head) {
    
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> num << "  ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {

    Node* n = new Node(583);
    //cout << n->num <<endl;
    //cout << n->next <<endl; 

    Node* head = n;
    Node* tail = n;
    print(head);

    Insert_node_Tail(tail, 23);

    print(head);

    Insert_node_Tail(tail, 5680);

    print(head);
    return 0;
}