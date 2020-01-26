#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template <typename T>
void p(T ar[],int n)
{
    for(int i=0;i<n;i++)
         cout<<ar[i]<<" ";
}

int main()
{
     char ar[4];
     for(int i=0;i<4;i++)
          cin>>ar[i];
      p(ar,4);
    
    return 0;
}
