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
	    int p[n+1];
	    for(int i=1;i<=n;i++)
	     cin>>p[i];
	     int count=0;
	    for(int i=1;i<=n;i++)
	    {
	        int max=0;
	        int max2=0;
	        if(i+5<n)
	        {
	           for(int j=i+1;j<=i+5;j++)
	             if(p[i]<p[j])
	               max++;
	        }
	        if(i-5>=1)
	        {
	             for(int j=i-1;j>=i-5;j--)
	                 if(p[i]<p[j])
	                      max2++;  
	        }
	        if(max==5)
	          count++;
	         if(max2==5)
	          count++;
	    }
	    cout<<count<<endl;
	    t--;
	}
	return 0;
}

