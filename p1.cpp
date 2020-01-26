#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int n,t,count=0,i;
      cin>>n>>t;
             long long int a[n];
        	for(i=0;i<n;i++)
              {     cin>>a[i];}
	sort(a,a+n);
	for(i=0;i<n-3;i++)
   	 {
   	     if(a[i]>t)
   	      break;
   	      for(long long int  j=i+1;j<n-2;j++)
   	      {
   	          if((a[i]+a[j])>t)
   	             break;
   	           for(long long int k=j+1;k<n-1;k++)
   	            {if((a[i]+a[j]+a[k])>t)
   	                 break;
   	                for(long long int l=k+1;l<n;l++)
   	                {
   	                    if((a[i]+a[j]+a[k]+a[l])>t)
   	                       break;
   	                     if((a[i]+a[j]+a[k]+a[l])==t)
   	                       count++;;
   	                }
   	            }
   	      }
   	 }
	        
	cout<<count<<endl;
	return 0;
}
