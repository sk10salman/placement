#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int r,c;
	    cin>>r>>c;
	    int arr[r][c],a[100001]={0};
	    for(int k=0;k<r;k++)
	      for(int l=0;l<c;l++)
	        { cin>>arr[k][l];
	            a[arr[k][l]]++;
	        }
	        int count=0,b;
	     for(int k=0;k<10001;k++)
	         {
	             if(a[k]>=1)
	                {
	                    count++;
	                }
	           if(count==int((r*c)/2))
	           {
	               b=k;
	               break;
	           }
	         }
	         cout<<b<<endl;
	}
	return 0;
}
