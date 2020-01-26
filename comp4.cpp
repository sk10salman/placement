#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	     int a[n]={0};
	     int count=0,max=0;
	     for(int i=n-1;i>=0;i--)
	     {
	          max=0;
	         if(a[i]==0)
	         {for(int j=0;j<i;j++)
	           {
	                if(arr[j]%arr[i]==0)
	                {  max++;
	                 a[j]=1;}
	           }}
	           if(count<max)
	             count=max;
	     }
	     cout<<count<<endl;
	     t--;
	}
	return 0;
}

