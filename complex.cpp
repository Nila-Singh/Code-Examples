/*
	Name: Nila Singh
	CSCI 272
	Description: This program is made to work as a calculator for complex numbers.
	It uses the operations of +, -, *, /, and ==. A complex class is used to handle
	inputted data.
*/
#include<iostream>
#include<string>
using namespace std; 

class Complex
{
	private:
		float a;
		float b;
	
	public:
		Complex()
		{
			a=0;
			b=0;
		}
		Complex(float real,float ima)
		{
			a=real;
			b=ima;
		}
		void getComplex()
		{
			cout<<"Enter complex numbers a and b, where the equation is a+bi"<<endl;
			cin>>a>>b; 
		}
		void displayComplex()
		{
			cout<<a<<"+"<<b<<"i"<<endl;
		}
		bool operator== (Complex &num2)
		{
			if(a==num2.a&&b==num2.b)
				return true;
			else if(a!=num2.a&&b!=num2.b)
				return false;
		}
		Complex operator+ (Complex &num2)
		{
			Complex num3;
			num3.a=a+num2.a;
			num3.b=b+num2.b;
			return num3;
		}
		Complex operator- (Complex &num2)
		{
			Complex num3;
			num3.a=a-num2.a;
			num3.b=b-num2.b;
			return num3;
		}
		Complex operator* (Complex &num2)
		{
			Complex num3;
			num3.a=(a*num2.a)-(b*num2.b);
			num3.b=(a*num2.b)+(num2.a*b);
			return num3;
		}
		Complex operator/ (Complex &num2)
		{
			Complex num3;
			num3.a=((a*num2.a)+(b*num2.b))/((num2.a*num2.a)+(num2.b*num2.b));
			num3.b=((b*num2.a)-(a*num2.b))/((num2.a*num2.a)+(num2.b*num2.b));
			return num3;
		}
		Complex operator= (Complex &num3)
		{
		a=num3.a;
		b=num3.b;
		return num3;
		}
};

int main()
{
	Complex num1;
	Complex num2;
	Complex num3; 
	int o;
	while(1)
	{
		cout<<"Enter operator by number association (1= +, 2= -, 3= *, 4= /, 5= ==)"<<endl;
		cin>>o;
		num1.getComplex();
		num2.getComplex();
		if(o==1)
		{
			(num1+num2).displayComplex();
		}
		if(o==2)
		{
			(num1-num2).displayComplex();
		}
		if(o==3)
		{
			(num1*num2).displayComplex();
		}
		if(o==4)
		{
			(num1/num2).displayComplex();
		}
		if(o==5)
		{
			cout<<(num1==num2)<<endl;
		}
	}
	return 0;
}
