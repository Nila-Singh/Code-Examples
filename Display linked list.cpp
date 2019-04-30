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

double Search(Node *S)
{
	return S->data;
}

int main()
{	double a=23, b=52;
	Node *N1;
	N1=new Node;
	N1->prev=NULL;
	
	Node *N2;
	N2=new Node;
	
	Node *N3;
	N3=new Node;
	
	AddNode(a, N1, N2);
	AddNode(b, N2, N3);
	
	Node *S;
	S=N1;
	while(S->next!=NULL)
	{
		cout<<Search(S)<<endl;
		S=S->next;
	}
	
system("Pause");
return 0;
}
