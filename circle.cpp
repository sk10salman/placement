#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void flood(int x, int y, int new_col, int old_col) 
{ 
    // check current pixel is old_color or not 
    if (getpixel(x, y) == old_col) { 
  
        // put new pixel with new color 
        putpixel(x, y, new_col); 
  
        // recursive call for bottom pixel fill 
        flood(x + 1, y, new_col, old_col); 
  
        // recursive call for top pixel fill 
        flood(x - 1, y, new_col, old_col); 
  
        // recursive call for right pixel fill 
        flood(x, y + 1, new_col, old_col); 
  
        // recursive call for left pixel fill 
        flood(x, y - 1, new_col, old_col); 
    } 

} 
void circle(int xc,int yc,int r)
{
    int x=0,y=r;
    int p=1-r;
     putpixel(x+xc,y+yc,5);
              putpixel(-x+xc,y+yc,5);
              putpixel(x+xc,-y+yc,5);
              putpixel(-x+xc,-y+yc,5);
              putpixel(y+xc,x+yc,5);
              putpixel(-y+xc,x+yc,5);
              putpixel(y+xc,-x+yc,5);
              putpixel(-y+xc,-x+yc,5);
    while(x<=y)
     {
         if(p<=0)
          {
              
              x +=1;
            p += 2*x+1;
              putpixel(x+xc,y+yc,5);
              putpixel(-x+xc,y+yc,5);
              putpixel(x+xc,-y+yc,5);
              putpixel(-x+xc,-y+yc,5);
              putpixel(y+xc,x+yc,5);
              putpixel(-y+xc,x+yc,5);
              putpixel(y+xc,-x+yc,5);
              putpixel(-y+xc,-x+yc,5);
              
             
              delay(20);
             
           }
          else
            {
          
                x+=1;
                   y -=1;
  p += 2*x+1-(2*y);
                
           putpixel(x+xc,y+yc,5);
              putpixel(-x+xc,y+yc,5);
              putpixel(x+xc,-y+yc,5);
              putpixel(-x+xc,-y+yc,5);
              putpixel(y+xc,x+yc,5);
              putpixel(-y+xc,x+yc,5);
              putpixel(y+xc,-x+yc,5);
              putpixel(-y+xc,-x+yc,5);
               delay(20);
                
             }
      }
     delay(2000);
}
int main()
{
    int xc,yc,r,x,y,old,ne;
    old=0,ne=7;
    cout<<"enter the center and radius: ";
    cin>>xc>>yc>>r;
   
    
     int gd = DETECT, gm; 
     initgraph(&gd,&gm,"");
    circle(xc,yc,r);
    
      delay(2000);
      flood(xc+1,yc+1,12,0);
    
}
