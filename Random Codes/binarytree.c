/* This is implementation of Binary Tree using Arrays*/

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct tree{
//     char data[10];
//     struct tree* left;
//     struct tree* right;
// }Node;  

// int ctr;
// Node* tree[100];

// int max(int x, int y){
//     if(x>y) return x;
//     else return y;
// }

// Node* getNode(){
//     Node* tmp;
//     tmp = (Node*) malloc(sizeof(Node*));
//     printf("\n Enter Data:");
//     scanf("%s", tmp->data);
//     tmp->left = NULL;
//     tmp->right = NULL;
//     return tmp;
// }

// void create_binary(){
//     int j, i=0;
//     printf("\n How many nodes do you want: ");
//     scanf("%d", &ctr);
//     j = ctr;
//     tree[0] = getNode();
//     j--;
//     do{
//         if(j>0){
//             tree[2*i+1] = getNode();
//             tree[i]->left = tree[2*i+1];
//             j--;
//         }
//         if(j>0){
//             tree[2*i+2] = getNode();
//             j--;
//             tree[i]->right = tree[2*i+2];
//         }
//         i++;
//     }
//     while(j>0);
// }

// void inorder(Node* root){
//     if(root){
//         inorder(root->left);
//         printf("s", root->data);
//         inorder(root->right);
//     }
// }

// void preorder(Node* root){
//     if(root){
//         printf("s", root->data);
//         preorder(root->left);
//         preorder(root->right);
//     }
// }

// void postorder(Node* root){
//     if(root){
//         postorder(root->left);
//         postorder(root->right);
//         printf("%s", root->data);
//     }
// }

// void levelorder(){
//     for(int i=0;i<ctr;i++){
//         if(tree[i])
//             printf("%s", tree[i]->data);
//     }
// }

// void print_leaf(Node* root){
//     if(root){
//         if(!root->left && !root->right)
//             printf("%s", root->data);
//         print_leaf(root->left);
//         print_leaf(root->right);
//     }
// }

// int height(Node* root){
//     if(!root) return 0;
//     if(!root->left && !root->right) return 0;
//     return (1+max(height(root->left), height(root->right)));
// }

// void main(){
//     create_binary();
//     printf("\n Inorder Traversal: ");
//     inorder(tree[0]);
//     printf("\n Preorder Traversal: ");
//     preorder(tree[0]);
//     printf("\n Postorder Traversal: ");
//     postorder(tree[0]);
//     printf("\n Level Order Traversal: ");
//     levelorder();
//     printf("\n Leaf Nodes: ");
//     print_leaf(tree[0]);
//     printf("\n Height of the Tree: %d", height(tree[0]));
// }


/* This is implementation of Binary Tree Using Pointers*/

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct tree{
//     char data[10];
//     struct tree* left;
//     struct tree* right;
// } Node;

// Node* Q[50];
// int ctr;

// Node* getNode(){
//     Node* tmp;
//     tmp = (Node*) malloc(sizeof(Node));
//     printf("\n Enter Data: ");
//     scanf("%d", &tmp->data);
//     tmp->left = NULL;
//     tmp->right = NULL;
//     return tmp;
// }

// void create_binary(Node* root){
//     char op;
//     ctr = 1;
//     if(root){
//         printf("\n Does node %s has left subtree (Y/N)", root->data);
//         scanf("%c", &op);
//         if(op=='y' || op=='Y'){
//             root->left = getNode();
//             ctr++;
//             create_binary(root->left);
//         }
//         else{
//             root->left = NULL;
//             create_binary(root->left);
//         }
//         printf("\n Does node %s has right subtree (Y/N)", root->data);
//         scanf("%c", &op);
//         if(op=='y' || op=='Y'){
//             root->right = getNode();
//             ctr++;
//             create_binary(root->right);
//         }
//         else{
//             root->right = NULL;
//             create_binary(root->right);
//         }
//     }
// }

// int menu(){
//     int ch;
//     printf("\n Enter 1 for Creating Binary Tree");
//     printf("\n Enter 2 for Inorder Traversal");
//     printf("\n Enter 3 for Preorder Traversal");
//     printf("\n Enter 4 for Postorder Traversal");
//     printf("\n Enter 5 for Level Order Traversal");
//     printf("\n Enter 6 for leaf nodes");
//     printf("\n Enter 7 for height of Tree");
//     printf("\n Enter 8 for Print Binary Tree");
//     printf("\n Enter 9 for deleting a node");
//     printf("\n Enter 10 for Quit");
//     print("\n Enter your choice now: ");
//     scanf("%d", &ch);
//     return ch;
// }

// void main(){
//     int ch;
//     Node* root = NULL;
//     do{
//         ch = menu();
//         switch(ch){
//             case 1:
//                     if(!root){
//                         root = getNode();
//                         create_binary(root);
//                     }
//                     else{
//                         printf("\n Tree already created");
//                     }
//                     break
//             case 2:
//             case 3:
//             case 4:
//             case 5:
//             case 6:
//             case 7:
//             case 8:
//             case 9:
//             case 10: exit(0);

//         }
//     }while(1);
// }

