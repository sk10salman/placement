#include<iostream>
using namespace std;
struct box{
      
      int l,b,h;
      public:
      void input()
     {
        cout<<"enter the values";
        cin>>l>>b>>h;
      }
    void display()
      {
           cout<<l*b*h;
       }
};
int main()
{
    box b1,b2;
    b1.l=2,b1.h=2,b1.b=2;
    b2.input();
    b2.display();
    b1.display();
   return 0;
}   
