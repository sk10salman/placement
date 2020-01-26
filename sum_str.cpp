#include <bits/stdc++.h>

using namespace std;



// Complete the superDigit function below.
int superDigit(string n, int k) {
        int sum=0;
        for(int i=0;i<n.length();i++)
        {
            sum += (n[i])-'0';
        }
        sum = sum*k;
        
            return sum;
     
}
int main()
{
    string s;
    int k;
    cin>>s;
    cin>>k;
    cout<<superDigit(s,k)<<endl;
    return 0;
}

