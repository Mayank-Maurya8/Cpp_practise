#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *next;
};

void printlist(Node* start){
	while(start != NULL){
		cout << start->data << " ";
		start = start->next;
	}
}

void insert(Node** start,int n){
	Node* new_node = new Node() ;
	new_node->data = n;
	new_node->next = (*start);

	(*start) = new_node;
}

void delete_node(Node** start,int pos){
	if(*start == NULL){
		return;
	}

	Node* temp = *start;

	if(pos == 0){
		*start = temp->next;
		free(temp);
		return;
	}
	for(int i=0; temp !=NULL && i<pos-1;i++){
		temp =temp->next;
	}

	if(temp == NULL || temp->next ==NULL){
		return;
	}
	Node* nex= new Node();

	nex = temp->next->next;
	free(temp->next);
	temp->next = nex;


}


int main(){
	Node *head = NULL;
	// Node *sec = NULL;
	// Node *thi = NULL;
	int n;

	// head = new Node();
	// sec = new Node();
	// thi = new Node();

	// head->data = 1;
	// head->next = sec;

	// sec->data = 1;
	// sec->next = thi;

	// thi->data = 1;
	// thi->next = NULL;


	
	// cout << " Enter the number you want to enter: ";
	// cin >> n;
	insert(&head,1);
	insert(&head,2);
	insert(&head,3);

	insert(&head,4);
	insert(&head,5);
	printlist(head);

	delete_node(&head,3);
	cout<<"After delete :\n";
	printlist(head);
	return 0;
}