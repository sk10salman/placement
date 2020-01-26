#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    for(int i=0;i<6;i++)
   {
      int x;
      cout<<"enter the element:";
      cin>>x;
      a.push_back(x);
   }
   for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
    
   cout<<a.back()<<endl;
   return 0;
}
