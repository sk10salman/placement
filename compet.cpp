#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t>0)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	     int count=0,sum;
	     for(int i=0;i<n;i++)
	     {
                         sum=1;
	     
	          for(int l=i;l<n;l++)
	          {
	              sum *= arr[l];
	              if(sum<k)
	                {
	                    count++;
	                }
	          }
	     }
	     cout<<count<<endl;
	     t--;
	}
	return 0;
}
