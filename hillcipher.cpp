#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s1,s2="";
     cout<<"enter string:";
      getline(cin,s1);
      int n,x=0;
      cout<<"\nenter size of matrix:";
      cin>>n;
       
      int a[1][n];
        
      int k[n][n],m[1][n]={0};
   for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
            cin>>k[i][j];
   while(x<s1.length())
   {
       
        for(int i=0;i<n;i++)
           a[0][i]=s1[x+i]-'A';
       
      
       
   
       for(int i=0;i<1;i++)
            for(int j=0;j<n;j++)
               {for(int l=0;l<n;l++)
                    { m[i][j] += a[i][l] * k[l][j];}
                          m[i][j] %=26;
                        cout<<m[i][j]<<" ";
                      s2 +=char(m[i][j]+65);}
      x = x+n;}
       cout<<"encript message::>\t"<<s2<<endl;
     return 0;
}
  
