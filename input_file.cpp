#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s1="",s2,s3;
     ifstream file("file.txt");
     if(file.is_open())
       {

           while(getline (file,s2))
           {
               s1+=s2;
               s1+="\n";
            }
        }
       cout<<s1<<endl;
     
     return 0;
}
