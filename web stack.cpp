#include<iostream>
#include<stack>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    fstream file1, file2, file3;
    
    string str1, str2, str3;
    stack <string> S1;
    file1.open("webone.html");
    while(!file1)
    {
        cout<<"Error opening file 1"<<endl;
    }
   
    file2.open("webtwo.html"); 
    while(!file2)
    {
        cout<<"Error opening file 2"<<endl;
    }
    
    file3.open("webthree.html");
    while(!file3)
    {
        cout<<"Error opening file 3"<<endl;
    }
    while(!file1.eof())
    {
    file1>>str1;
    }
    while(!file2.eof())
    {
    file2>>str2;
    }
    while(!file3.eof())
    {
    file3>>str3;
    }
    
    fstream t1("textfile1.txt");
    t1<<str1;
	fstream t2("textfile2.txt");
	t2<<str2;
	fstream t3("textfile3.txt");
	t3<<str3;
	
    S1.push(str1);
    S1.push(str2);
    S1.push(str3);
    while(!S1.empty())
    {
    cout<<S1.top()<<endl;
    S1.pop();
    }
    
    file1.close();
    file2.close();
    file3.close();
    t1.close();
    t2.close();
    t3.close();
    system("Pause");
    return 0;
}

