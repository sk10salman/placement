#include<iostream>
using namespace std;
float area(int r)
{
    return float(3.14*r*r);
}
int area(int l,int b,int h)
{
   return l*b*h;
}
int area(int l,int h)
{
   return l*h;
}

int main()
{
    float c = area(5);
    int v = area(2,3,4);
    int i = area(2,3);
    int a = area(5);
    cout<<c<<v<<i<<a<<"\n";
    return 0;
}

