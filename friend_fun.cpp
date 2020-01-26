#include<iostream>
using namespace std;
class B;
class A
{
    
    int x;
    public:
    A(int a)
    {
        x=a;
     }
    void get()
     {
        cout<<"value is"<<x<<"\n";
     }
     friend void sum(A ,B);
};

class B
{
   int y;
   public:
     B(int a)
     {
          y=a;
         
      }
       friend void sum(A ,B);
};
void sum(A c1,B c2)
{
    cout<<"sum is "<<c1.x+c2.y<<"\n";
}
int main()
{
    A c1(3);
    B c2(2);
    sum(c1,c2);
    
    return 0;
}
