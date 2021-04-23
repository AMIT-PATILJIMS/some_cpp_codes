// iterative method...
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d){
		data = d;
		next = NULL;
	}
};

void insertAtEnd(node* &head, int d){
	node* n = new node(d);
	if (head == NULL) {
		// Linkedlist is empty
		head = n;
	}
	else {
		node* temp = head;
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next = n;
	}
}

void ReverseLL(node* &head){ // &head because we want change the head actually..
	node* c = head,*prev = NULL,*n;

	while(c!=NULL){
		n = c->next;
		c->next = prev;
		prev = c;
		c = n;
	}
	head = prev;
}

void print(node* head) {
	while (head != NULL) {
		cout << head->data<<" ";
		head = head->next;
	}
	cout << endl;
}

int main() {

	node* head;
	head = NULL;

	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
		insertAtEnd(head, arr[i]);
	}

	ReverseLL(head);
	print(head);

	return 0;
}
