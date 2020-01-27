#include<stdio.h>
#include<conio.h>
#include"mouse.h"
#include<stdlib.h>
#include<math.h>
int round(float x)
{
    if(x-(int)x>0.5)
        return (int)x+1;
    return (int)x;
}
void circle(int x,int y,int r,int color)
{
    float p = 1.25 - r;
    int x1=0,y1=r;
    while(x1<y1)
    {
        putpixel(round(x+x1),round(y+y1),color);
        putpixel(round(x-x1),round(y-y1),color);
        putpixel(round(x+x1),round(y-y1),color);
        putpixel(round(x-x1),round(y+y1),color);
        putpixel(round(x+y1),round(y+x1),color);
        putpixel(round(x-y1),round(y-x1),color);
        putpixel(round(x+y1),round(y-x1),color);
        putpixel(round(x-y1),round(y+x1),color);
        if(p<0)
        {
            p += (2*x1) + 3;
        }    
        else
        {
            p += (2*x1) - (2*y1) + 5;
            y1=y1-1;
        }
        x1=x1+1;
    }
}
void main()
{
    int gd=DETECT,gm,b,x,y;
    int x1[10],y1[10];
    if(initmouse())
    {
        printf("\nMouse Driver not found. Exiting............");
        delay(1000);
        exit(0);
    }    
    initgraph(&gd,&gm,"C:\\TC3\\BGI\\");
    showmouseptr();
    while(1)
    {
        getmousepos(&b,&x,&y);
        if(b==1)
        {
            x1[i] = x;
        }
        if(i%2==1)
        {
            circle(x1[i-1],y1[i-1],abs(x1[i]-x1[i-1]),15);
        }
    }    
}
