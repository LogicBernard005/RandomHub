#include <bits/stdc++.h>
using namespace std;

//Class for Deque
//Deque is used so that we are able to flucuate position of 
//mid as per requriment of push and pop

class Node{
public:    
    Node* next;
    Node* prev;
    int value;

    Node(int x){
        this -> value = x;
        next = prev = NULL;
    }
};

class Mystack{

int size = 0;
//tmp serves as the dummy initial state of stack having value as -1
//next and prev as NULL
Node* tmp = new Node(-1);
Node* head = tmp;
Node* mid = tmp;

public:

//Insert element in the stack
void push(int x){
    Node* curr = new Node(x);
    curr->prev = NULL;
    curr->next = head;
    size++;
    head->prev = curr;
    head = curr;
    if(size==1) mid = curr;
    if(~size&1){
        mid = mid->prev;
    }
}

//Remove topmost element and return the removed element 
int pop(){
    Node* temp = head;
    int ans = head->value;
    if(size==0){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    head = head->next;
    if(head!=NULL) head->prev = NULL;
    size--;
    if(size&1) mid = mid->next;
    free(temp);
    return ans;
}

//Find middle element and return it
int middle(){
    if(size==0){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    return mid->value;
}
};


int main()
{
    Mystack obj;

    obj.push(1);
    obj.pop();
    obj.push(2);
    obj.pop();
    obj.push(3);
    obj.push(4);
    obj.push(5);
    obj.pop();
    cout<<"Middle element is:"<<obj.middle()<<endl;

    return 0;
}