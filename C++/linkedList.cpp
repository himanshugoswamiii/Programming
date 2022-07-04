#include "iostream"
// Defined the template of our node 
struct Node
{
    int data; 
    Node* next;
};

class LinkedList{
void display(Node* head){
    while(head!=NULL){
        std::cout<<head->data<<std::endl;
        head=head->next;
    }
}
};

int main (int argc, char *argv[])
{
    
    Node* head;
    Node* second;
    Node* third;

    // Memory allocation
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    // Connecting the nodes
    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;

    display(head);

    return 0;
}
