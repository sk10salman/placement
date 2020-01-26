#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    int n,m,q;
	    cin>>n>>m>>q;
	    int arr[n][m]={0};
	    for(int i=1;i<=q;i++)
	    {
	        int x,y;
	        cin>>x>>y;
	        for(int j=0;j<n;j++)
	           arr[j][y-1]=arr[j][y-1]+1;
	           for(int j=0;j<m;j++)
	           arr[x-1][j]=arr[x-1][j]+1;
	    }
	    int count=0;
	    for(int i=0;i<n;i++)
	      for(int j=0;j<m;j++)
	         if((arr[i][j])%2!=0)
	            count++;
	   cout<<count<<endl;
	   t--;
	}
	return 0;
}

