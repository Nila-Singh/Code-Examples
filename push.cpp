#include<iostream>
using namespace std;

void push(int array[], int num, int i)
{
	
	if (array[0]==0)
	array[i]=num;
	else if(array[0]!=0){
		array[4]=array[3];
		array[3]=array[2];
		array[2]=array[1];
		array[1]=array[0];
		array[0]=num;	
	}

}
void pop(int array[], int i)
{

	cout<<array[0]<<" ";
	array[0]=array[1];
	array[1]=array[2];
	array[2]=array[3];
	array[3]=array[4];
	array[4]=0;
}

int main()
{
	int num=0;
	int i=0;
	int array[5]={0};

	while(i<5)
	{
	cout<<"Enter a number"<<endl;
	cin>>num;
	push(array, num, i);
	i++;
	}
	for(i=0; i<5; i++)
	pop(array, i);	
}

