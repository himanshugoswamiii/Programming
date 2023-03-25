// Program to print a linked list
#include <iostream>

using namespace std;

struct Node{
	int value;
	Node* next;
};

// Printing the linked list
void printLL(Node* head){
	Node* temp = head;
	while(temp != nullptr){
		cout << temp->value << endl;
		temp = temp->next;
	}
}

int main(){
	// Dynamically allocate in the heap
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();

	head->value = 10;
	second->value = 20;
	third->value = 30;

	head->next = second;
	second->next = third;
	third->next = nullptr;

	// Calling the function
	printLL(head);

	return 0;
}

