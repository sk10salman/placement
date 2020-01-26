#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t>0)
   {
       int sum=0,n;
       cin>>n;
       int ar[100009]={0};
       string s;
       cin>>s;
       for(int i=0;i<s.length();i++)
       {
           ar[s[i]-'a']++;
       }
       for(int i=0;i<100009;i++)
       {
          sum += int(ar[i]/2);
       }
       cout<<sum<<endl;
       t--;
   }
	return 0;
}

