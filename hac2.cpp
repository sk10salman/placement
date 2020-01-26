#include <bits/stdc++.h>

using namespace std;



// Complete the superDigit function below.
int superDigit(string n, int k) {
        int sum=0;
        for(int i=0;i<n.length();i++)
        {
            sum += int(n[i]);
        }
        sum = sum*k;
        cout<<int(n[0]);
        if(sum<=9)
            return sum;
        else{
            string a = to_string(sum);
             return superDigit(a,1);
        }
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
