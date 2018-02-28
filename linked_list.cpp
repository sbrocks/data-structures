#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;     //Node*  represents pointer to node
};

Node* head;         //global variable, can be accessed anywhere,   it's a pointer

//Insertion at beginning
void Insert(int x){
	Node* temp=new Node();     //temp is a pointer to Node, it will store the memory address of Node
	temp->data = x;
	temp->next = head;
	head = temp;	
}

void Print(){
	Node* temp=head;
	cout<<"The list is:  ";
	while(temp!=NULL){
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
}

int main(){
	head = NULL;    //empty list
	int i,n;
	cout<<"Enter the number of elements: \n";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\n Enter the number: ";
		cin>>n;
		Insert(n);     
		Print();
	}	
	return 0;
}











