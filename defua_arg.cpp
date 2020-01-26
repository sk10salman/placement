#include<iostream>
using namespace std;
int add(int ,int ,int=20);
int main()
{
    int a=5,b=10,d=12;
    cout<<add(a,b,d);
    return 0;
}
int add(int x,int y,int z)
{
   return (x+y+z);
}
