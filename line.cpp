#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void dda(int x1,int y1,int x2,int y2)
{
     int dx=x2-x1;
     int dy=y2-y1;
     int step;
     if(abs(dx)>=abs(dy))
         step=dx;
     else
         step=dy;
         float Xinc = dx / (float) step; 
        float Yinc = dy / (float) step; 
       for(int i=0;i<step;i++)
       {
            putpixel(x1,y1,5);
            x1+=Xinc;
            y1+=Yinc;
           delay(10);
        }
    delay(200);
}
int main()
{
    
    int x1,x2,y1,y2;
    cout<<"enter the point";
    cin>>x1>>y1>>x2>>y2;
    int gd = DETECT, gm; 
     initgraph(&gd,&gm,"");
   dda(x1,y1,x2,y2);
   
   return 0;
}
   
