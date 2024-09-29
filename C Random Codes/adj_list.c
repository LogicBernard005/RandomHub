#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define maxNode 4

typedef struct Node{
    int vertex;
    struct Node *next;
}Node;

typedef struct List{
    Node *head;
}List; 

List* adjlist[maxNode] = {0};

void addNode(int s, int d){
    Node *src, *tmp, *dest;

    if(adjlist[s]->head==NULL){
        src = (Node*) malloc(sizeof(malloc));
        src->vertex = s;
        src->next = NULL;
        adjlist[s]->head = src;
    }
    dest = (Node*) malloc(sizeof(malloc));
    dest->vertex = d;
    dest->next = NULL;
    tmp = adjlist[s]->head;
    while(tmp->next!=NULL){
        tmp = tmp->next;
    }
    tmp->next = dest;
}

void printList(){
    for(int i=0;i<maxNode;i++){
        Node* p = adjlist[i]->head;
        printf("Adjacency List for the vertex %d: ", i);
        while(p){
            printf("%d ", p->vertex);
            p = p->next;
        }
        printf("\n");
    }
}

void main(){
    for (int i=0;i<maxNode;i++){
        adjlist[i] = (List*) malloc(sizeof(List*));
        adjlist[i]->head = NULL;
    }
    addNode(0,1);
    addNode(0,3);
    addNode(1,2);
    printList();
}