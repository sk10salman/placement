#include <iostream>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	long long int n;
	    cin>>n;
	  long long int t1=1,t2=1,sum=0;
	    for(long long int j=0;j<n;j++)
	    {
	        if(t1%2==0)
	        {
	            sum += t1;
	        }
	        
	        int next =t1+t2;
	        t1=t2;
	        t2=next;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
