#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node *prev;
};

int main()
{
	Node *head=new Node;
	Node *N2=new Node;
	Node *N3=new Node; 
	head->data=10;
	N2->data=28;
	N3->data=159;
	head->next=NULL;;
	head->next=N2;
	N2->next=NULL;
	N2->next=N3;
	N3->next=NULL;
	
	N3->prev=NULL;
	N2->prev=NULL;
	head->prev=NULL;
	N3->prev=N2;
	N2->prev=head;
	cout<<head->next->data<<endl;
	cout<<N2->prev->data<<endl;
	cout<<N3->prev->data<<endl;
	system("Pause");
	return 0;
	
}
