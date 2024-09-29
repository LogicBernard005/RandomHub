//impletation of queue using single pointer

#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
    int data;
    struct queue *next;
}q;

q*  enqueue(q*);
q*  dequeue(q*);
void  display(q*);

int main()
{
    q *f=NULL,*r=NULL;
    int ch;
     do
    {
        printf("enter 1 for enqueue\n");
        printf("enter 2 for dequeue\n");
        printf("enter 3 for display\n");
        printf("enter your choice\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                    r=enqueue(r);
                    if(f==NULL)
                    f=r;
                    break;
            case 2:
                    f=dequeue(f);
                    if(f==NULL)
                    r=NULL;
                    break;
            case 3:
                    display (f);
                    break;
            
        }
    }while(ch<=4);
}


q* enqueue(q* r)
{
    q* p=NULL;
    int x;
    p=(q*)malloc(sizeof(q*));
    if(p!=NULL)
    {
        printf("enter data\n");
        scanf("%d", &x);
        p->data=x;
        if(r==NULL)
        {
            r=p;
        }
        else
        {
            r->next=p;
            r=p;
            
        }
           r->next=NULL;
    }
    return r;
}

q* dequeue(q* f)
{
    q* p=NULL;
    if(f==NULL)
    {
        printf("queue is empty\n");

    }
    else
    {
        p=f; 
        printf("%d\n", f->data);
        f=f->next;
        free(p);
    }
    return f;
}

void display(q* f)
{
    if(f==NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        while(f!=NULL)
        {
            printf("%d ", f->data);
            f=f->next;
     }
     printf("\n");
    }
}
