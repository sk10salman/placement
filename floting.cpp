#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int check(int y)
{
    for(int i=10;i<=2000;i=i+10)
    {
        if(y<=i)
          {return i;break;}
    }
}
int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int x,y;
	    if(x%y==0)
	       cout<<int(x/y)<<endl;
	    else{
	        int rem = x-int(x/y);
	        int a = check(y);
	        cout<<int(x/y)<<".("<<int((a*rem)/y)<<")"<<endl;
	       
	    }
	}
	return 0;
}
