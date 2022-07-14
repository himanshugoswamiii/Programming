// Q.1 : Pre-Order and Post-Order Traversal
#include <iostream>
#include <stdio.h>
#include <malloc.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Inserting values in BST
struct Node* createNode(int data){
    struct Node* n;
    n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

// Left - Right - Root
void postOrder(struct Node* root){
    if (root!=NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\n",root->data);
        
    }
}

// Pre-Order Traversal
void preorder(struct Node* root){
    if(root!=NULL){
        printf("%d\n",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main ()
{
    // Creation of Nodes
    struct Node* p=createNode(10);
    struct Node* p1=createNode(11);
    struct Node* p2=createNode(6);
    struct Node* p3=createNode(4);
    struct Node* p4=createNode(12);
    struct Node* p5=createNode(9);


    // Linking the Nodes
    p->right=p1;
    p->left=p2;
    p2->left=p3;
    p2->right=p5;
    p1->right=p4;
    p1->left=NULL;

    cout<<"Press 1 to print the preorder and 2 to show the postOrder"<<endl;
    int choice;
    std::cin >> choice;
    switch (choice) {
        case 1:
            cout<<endl;
            preorder(p);
            break;
        case 2:
            cout<<endl;
            postOrder(p);
            break;
        default:
            cout<<"Press only 1 and 2"<<endl;
            break;
    }
    return 0;
}
