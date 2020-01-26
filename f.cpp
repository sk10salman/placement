#include <iostream>
using namespace std;

int main() {
   int T;
   cin>>T;
for(int i=0;i<T;i++)
   { int N;
      cin>>N;
       int arr[N],ar[N],a[N]={0};
       for(int l=0;l<N;l++)
          {
              cin>>arr[l];
              ar[l]=arr[l];
          }
           int t=0,o;
          for(int m=0;m<N;m++)
          { for(int j=0;j<N;j++)
             { if(ar[m]==arr[j])
                  a[m]++;}
                  if(t<a[m])
                    { t=a[m];o=m;}}
       
            if(t>(N/2))
            cout<<arr[o]<<"\n";
            else
                 cout<<"-1"<<"\n";
                  
          
   }      
	return 0;
}
