#include<iostream>
using namespace std;
int main()
{
   int x=5,y=10,z=30;
   int &a=x;
   int *p=&x;
   a++;
  *p++;
   cout<<"ref="<<a<<" point="<<*p<<"valu="<<x;;
   return 0;
}
   
