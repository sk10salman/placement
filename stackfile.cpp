#include <cmath>
#include <cstdio>
#include <stdio.h> 
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int size;
int main()
{
      string s="";
      int n;
      cin>>n;
     for(int i=0;i<n;i++)
    {
          int ch;
         
         cout<<"1.append - Append string to the end 2.Delete the last characters 3.print ";
          cin>>ch;
         switch (ch) 
              {
               case 1 : string w;
                    cin>>w;
                    s += w;
                    break;
              /* case 2 : int k;
                    cin>>k;
                    for(int i=0;i<k;i++)
                     {
                         s[i]=s[i];
                     }
                     break;
               case 3 : cout<<s;
                  break;
              default : printf("Choice other than 1, 2 and 3"); 
                      break;   */
         }}
     cout<<s;
           return 0;

}
    

