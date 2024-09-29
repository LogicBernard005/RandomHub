#include <bits/stdc++.h>
using namespace std;

class Stack{

    public:
        int data;
        Stack* next;
    
    Stack (int element){
        this -> data = element;
        this -> next = NULL;
    }

    void push(int element){
        Stack* temp = new Stack(element);
    }
};

int main()
{
    
    return 0;
}