#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};


void insertAtHead(Node* &head, int d){
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;
}


void print(Node* &head){
    Node *temp = head;
    while(temp){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail, int d){
    Node *temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}


void deleteNode(int pos, Node* &head){
    if(pos==1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        int cnt = 1;
        while(cnt<pos){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}


int main()
{
    Node *node1 = new Node(10);

    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;

    Node *head = node1;
    // print(head);
    // insertAtHead(head, 12);
    // print(head);
    // insertAtHead(head, 15);
    // print(head);

    Node *tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    deleteNode(1, head);
    print(head);

    return 0;
}