#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} node;

node* head = NULL;

node* create_node(){
    node* tmp = (node*) malloc(sizeof(node));
    if(!tmp){
        printf("\n Allocation failed");
        exit(1);
    }
    int d;
    printf("\n Enter Data: ");
    scanf("%d", &d);
    tmp->data = d;
    tmp->next = NULL;
    return tmp;
}

void create_cll(int n){
    node* newNode;
    node* shifter;
    for(int i=0;i<n;i++){
        newNode = create_node();
        if(head==NULL) head = newNode;
        else{
            shifter = head;
            while(shifter->next!=NULL){
                shifter = shifter->next;
            }
            shifter->next = newNode;
        }
    }
    newNode->next = head;
}

void insert_front(){
    node* newNode = create_node();
    if(head==NULL){
        head = newNode;
        newNode->next = head;
    }
    else{
        node* tmp = head;
        while(tmp->next!=head){
            tmp = tmp->next;
        }
        newNode->next = head;
        head = newNode;
        tmp->next = head;
    }
}

void insert_end(){
    node* newNode = create_node();
    if(head==NULL){
        head = newNode;
        newNode->next = head;
    }
    else{
        node* tmp = head;
        while(tmp->next!=head)
            tmp = tmp->next;
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
}

void display(){
    node* disNode = head;
    if(!disNode) printf("\n Empty List");
    else{
        printf("\n The CLL: %d  ", disNode->data);
        disNode = disNode->next;
        while(disNode!=head){
            printf("%d  ", disNode->data);
            disNode = disNode->next;
        }
    }  
}



int menu(){
    int ch;
    // clrscr();
    printf("\n Enter Choice");
    printf("\n 1: Creating a CLL");
    printf("\n 2: Insert at front");
    printf("\n 3: Insert at end");
    printf("\n 4: Insert in between");
    printf("\n 5: Deletion at front");
    printf("\n 6: Deletion at end");
    printf("\n 7: Deletion in between");
    printf("\n 8: Display the CLL");
    printf("\n 9: Free the CLL");
    printf("\n 10: For Exit \n");
    scanf("%d", &ch);
    return ch;
}

int main(){
    int ch;
    int n;
    // clrscr();
    while(1){
        ch = menu();
        switch(ch){
            case 1:
                if(head==NULL){
                    printf("\n Enter number to nodes to begin with: ");
                    scanf("%d", &n);
                    create_cll(n);
                }
                else printf("\n List already created \n");
                break;
            case 2:
                insert_front();
                break;
            case 3:
                insert_end();
                break;
            // case 4:
            // case 5:
            // case 6:
            // case 7:
            case 8:
                display();
                break;
            // case 9:
            case 10: exit(0);
        }
        getch();
    }
}