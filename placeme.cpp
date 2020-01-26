#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t>0)
	{
	    string s;
	    cin>>s;
	    int count=0;
	   vector <char> v;
	   v.push_back('/');
	    for(int i=0;i<s.length();i++)
	    {
	        v.push_back(s[i]);
	     while(v[v.size()-2]=='(' && v[v.size()-1]==')')
	        {v.pop_back();count+=2;v.pop_back();}
	   
	          
	      
         	           
	    }
	    cout<<count<<endl;
	    t--;
	}
	return 0;
}
