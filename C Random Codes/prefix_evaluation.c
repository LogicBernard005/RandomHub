#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXSIZE 100

int stack[MAXSIZE];
int top = -1;

void push(int c){
    if(top==MAXSIZE-1){
        printf("\n Stack Overflow");
        return;
    }
    else{
        top++;
        stack[top] = c;
    }
}

int pop(){
    int item;
    if(top==-1) {
        printf("\n Stack Underflow");
        return -1;
    }
    else{
        item = stack[top];
        top--;
        return item;
    }
}

int prefix_evaluation(char *prefix){

    int len = strlen(prefix);
    for (int i=len-1; i>=0; i--){

        if(prefix[i]>='0' && prefix[i]<='9'){
            int t = prefix[i] - '0';
            push(t);
        }

        else{
            int op1 = pop();
            int op2 = pop();

            switch(prefix[i]){
                case '+':
                    push(op1+op2);
                    break;
                case '-':
                    push(op1-op2);
                    break;
                case '*':
                    push(op1*op2);
                    break;
                case '/':
                    if(op2==0){
                        printf("\n Invalid Operation");
                        return -1;
                    }
                    push(op1/op2);
                    break;
                default: 
                    printf("\n Invalid operator in Expression");
                    return -1;
            }
        }
    }
    return pop();
}

int main(){

    char prefix[MAXSIZE];
    printf("\n Enter Prefix Expression: ");
    // gets(prefix);
    scanf("%s", prefix);

    int res = prefix_evaluation(prefix);

    if(res!=-1)
        printf("\n Result after Evaluation: ", res);

    return 0;
}