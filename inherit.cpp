#include<iostream>
using namespace std;
class A
{
    protected:
    int x;
    public:
    void put(int a)
    {
        x=a;
     }
    void get()
     {
        cout<<"value is"<<x<<"\n";
     }
};
class B:public A
{
   int y;
   public:
     B(int a)
     {
          y=a;
          x=a;
      }
};
int main()
{
    B z(3);
    z.get();
    return 0;
}
