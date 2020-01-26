#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n,m;
    cin>>n>>m;
   
    long long int arr[n],ar[n],a[n];
    for(long long int i=1;i<=n;i++)
        cin>>arr[i];
    for(long long int i=0;i<m;i++)
    {
       long long int k,x,y,l,h,count=1,c=1;
        cin>>k>>x>>y;
        if(k==1)
           { count=1;
               for(long long int j=x;j<=y;j++)
                 {ar[count]=arr[j];count++;}
                 for(long long int j=1;j<x;j++)
                      {ar[count]=arr[j];count++;}
                      for(long long int j=y+1;j<=n;j++)
                      {ar[count]=arr[j];count++;}

                      for(long long int j=1;j<=n;j++)
                            arr[j]=ar[j];
                       cout<<"count"<<count<<endl;;
           }
         else
         {
               c=1;
                 for(long long int j=1;j<x;j++)
                      {a[c]=arr[j];c++;}
                      for(long long int j=y+1;j<=n;j++)
                      {a[c]=arr[j];c++;}

                      for(long long int j=x;j<=y;j++)
                            {a[c]=arr[j];c++;}
                         for(long long int j=1;j<=n;j++)
                            arr[j]=a[j];
         }

    }
           long long int q=arr[1],w=arr[n];
           if(q>w)
                cout<<"a1-an:"<<(q-w)<<endl;
            else
                 cout<<(w-q)<<endl;
       for(long long int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    return 0;
}

