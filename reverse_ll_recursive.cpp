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

node* ReverseLL(node* head){


	if(head->next == NULL || head==NULL){ // linked list has zero or 1 elements
		return head;
	}

  node* node1 = ReverseLL(head->next); // first revsere head->next beacuse then only you can combine e.g. 1->2->3 then final answer would be 3->2->1 so it is necessary to reverse next of 1 first then only you can combine it with 1
       head->next->next = head; // now change this
	   head->next = NULL;
	   return node1;
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

node * nh = ReverseLL(head);

	print(nh);

	return 0;
}
