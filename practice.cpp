#include <iostream>
#include<bits/stdc++.h>
int mi=10000000007;
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
        long long int b=6553622;
         b = (b)*(b);
        cout<<b<<endl;
        long long int a=(pow(2,t));
         a=a%mi;
	cout<<a;
	return 0;
}

