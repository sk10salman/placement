#include<bits/stdc++.h>
using namespace std;
void rec(int n)
{
     int t=n;
      
       while(t>=0)
        {
            cout<<t<<" ";
            t=t-5;
         }
       while(t!=n)
        {
            cout<<t<<" ";
           t=t+5;
         }
      cout<<t<<" ";
    
        
}
int main()
{
    int t;
    cin>>t;
     while(t--)
    {
         int n;
         cin>>n;
         rec(n);
    }
   return 0;
}
