#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int x_max = 10; 
const int y_max = 8; 
const int x_min = 4; 
const int y_min = 4; 
const int INSIDE = 0; // 0000 
const int LEFT = 1;   // 0001 
const int RIGHT = 2;  // 0010 
const int BOTTOM = 4; // 0100 
const int TOP = 8;
int compute(double x,double y)
{
    int code=inside;
    if(x<x_min)
       code |= LEFT;
    else if(x>x_max)
       code |=RIGHT;
  if(y<y_min)
       code |= BOTTOM;
    else if(y>y_max)
       code |=TOP;
    return code;
}
int main()
{
    double x1,x2,y1,y2;
     cout<<"enter the point p1:  ";
    cin>>x1>>y1;
      cout<<"enter the point p2:  ";
       cin>>x2>>y2;
   int code1=compute(x1,y1);
   int code2=compute(x2,y2);
   if(code1==0 && code 2==0)
      {  
        cout<<"line accepting"<<endl;
        
      }
   else if(code1 && code2)
      {
            cout<<"line rejecting"<<endl;
       }
   else
   {
             
    }
  
  
}
