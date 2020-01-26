#include<iostream>
#include<fstream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    string ch;
    cout<<"enter the str\n";
   getline(cin,ch);  
    string name;
    cout<<"enter the file name:";
    getline(cin,name);
    ofstream o1;
    o1.open(name);
    o1<<ch;
    
    return 0;
}
