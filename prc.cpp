#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
   
    int fre;
    int data;
   
}dat;
bool compare(dat a, dat b)
{
	//for descending order replace with a.roll >b.roll
	if(a.fre > b.fre)		
		return 1;
	else
		return 0;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    dat p[61];
	    int ar[61]={0},a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        ar[a[i]]++;
	    }
	    for(int i=0;i<61;i++)
	     {
	         p[i].fre=ar[i];
	         p[i].data=i;
	     }
	   sort(p,p+61,compare);
             for(int i=0;i<61;i++)
	     {
                 if(p[i].fre!=0)
                  while((p[i].fre)--)
	         cout<<p[i].data<<" ";
                 else 
                     i=62;
	     }

	  cout<<endl;
	   t--;
	}
	return 0;
}
