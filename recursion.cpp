#include<iostream>
using namespace std; 
struct Node
{
	double data;
	
	Node *next;
	Node *prev;
};

void AddNode(double v, Node *n1, Node *n2)
{
	n1->data=v;
	n1->next=n2;
	n2->prev=n1;
	n2->next=NULL;
}

void Search(Node *S)
{
	
 	if(S->next!=NULL)	
	{
	cout<<S->data<<endl;
	Search(S->next);
	}
	else
	{
		return;
	}
}

int main()
{	double a=23, b=52, c=98;
	Node *N1;
	N1=new Node;
	N1->prev=NULL;
	
	Node *N2;
	N2=new Node;
	
	Node *N3;
	N3=new Node;
	
	Node *N4;
	N4=new Node;
	
	AddNode(a, N1, N2);
	AddNode(b, N2, N3);
	AddNode(c,N3, N4);
	
	Node *S;
	S=N1;
	Search(S);	
	
system("Pause");
return 0;
}
