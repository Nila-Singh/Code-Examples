#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<double>values;
    
    values.push(1.0);
    values.push(5.0);
    values.push(3.0);
    
    while( !values.empty() )
    {
       cout<<values.back()<<"  ";
       values.pop();
       }
 system("pause");
 return 0;
}      
     
           
    
    
