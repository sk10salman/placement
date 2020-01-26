#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t>0)
	{
	    long long n,m;
	    cin>>n>>m;
	    long long count=0;
	    while(true)
	    {
	        if(n<m)
	          {
	              n *=2;
	              count++;
	          }
	         else if(n>m)
	            {
	                n -= 1;
	                count++;
	            }
	           else
	              break;
	           
	    }
	    cout<<count<<endl;
            t--;
	}
	return 0;
}

