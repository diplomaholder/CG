#include<graphics.h>
#include<stdio.h>
#include<dos.h>
void curverec(int x,int y,int w, int h, int r,int color);
void roundrec(int x,int y,int w, int h,int color);
void contrasttext(int x,int y,char c[100],int color,int shadow);
void curverectext(int x,int y,int w, int h, int r,char c[100],int color,int tcolor,int tshadow);
void roundrectext(int x,int y,int w, int h, char c[100], int color,int tcolor, int tshadow);
void curverectextfill(int x,int y,int w, int h, int r,char c[100],int color,int tcolor,int tshadow, int fillcolor, int fillstyle);
void roundrectextfill(int x,int y,int w, int h, char c[100], int color,int tcolor, int tshadow, int fillcolor, int fillstyle);
void curverecfill(int x,int y,int w, int h, int r,int color, int fillcolor, int fillstyle);
void roundrecfill(int x,int y,int w, int h,int color, int fillcolor, int fillstyle);
void contrastcurverec(int x,int y,int w,int h,int r,int color,int shadow);
void contrastroundrec(int x,int y,int w,int h,int color,int shadow);
void contrastcurverectext(int x,int y,int w,int h,int r,char c[100],int color,int shadow,int tcolor,int tshadow);
void contrastroundrectext(int x,int y,int w,int h,char c[100],int color,int shadow,int tcolor, int tshadow);
void contrastcurverectextfill(int x,int y,int w,int h,int r,char c[100],int color,int shadow,int tcolor,int tshadow,int fillcolor, int fillstyle);
void contrastroundrectextfill(int x,int y,int w,int h,char c[100],int color,int shadow,int tcolor, int tshadow,int fillcolor, int fillstyle);
void curverec(int x,int y,int w, int h, int r,int color)
{
 if(!((h/2)<r))
 {
  setcolor(color);
  line((x-(w/2)+r),(y+(h/2)),(x+(w/2)-r),(y+(h/2)));
  line((x+(w/2)),(y+(h/2)-r),(x+(w/2)),(y-(h/2)+r));
  line((x-(w/2)+r),(y-(h/2)),(x+(w/2)-r),(y-(h/2)));
  line((x-(w/2)),(y+(h/2)-r),(x-(w/2)),(y-(h/2)+r));
  arc((x-(w/2)+r),(y-(h/2)+r),90,180,r);
  arc((x+(w/2)-r),(y-(h/2)+r),0,90,r);
  arc((x+(w/2)-r),(y+(h/2)-r),-90,0,r);
  arc((x-(w/2)+r),(y+(h/2)-r),-180,-90,r);
 }
 else
 {
  printf("Radius is greater than the height of the Curved Rectangle");
 }
}
void roundrec(int x,int y,int w,int h,int color)
{
 setcolor(color);
 line((x-(w/2)+(h/2)),(y+(h/2)),(x+(w/2)-(h/2)),(y+(h/2)));
 line((x-(w/2)+(h/2)),(y-(h/2)),(x+(w/2)-(h/2)),(y-(h/2)));
 arc((x-(w/2)+(h/2)),y,90,270,(h/2));
 arc((x+(w/2)-(h/2)),y,-90,90,(h/2));
}
void contrasttext(int x,int y,char c[100],int color,int shadow)
{
 setcolor(shadow);
 outtextxy(x+1-(textwidth(c)/2),y+1-(textheight(c)/2),c);
 setcolor(color);
 outtextxy(x-(textwidth(c)/2),y-(textheight(c)/2),c);
}
void curverectext(int x,int y,int w, int h, int r, char c[100], int color, int tcolor, int tshadow)
{
 if(!((h/2)<r))
 {
  setcolor(color);
  line((x-(w/2)+r),(y+(h/2)),(x+(w/2)-r),(y+(h/2)));
  line((x+(w/2)),(y+(h/2)-r),(x+(w/2)),(y-(h/2)+r));
  line((x-(w/2)+r),(y-(h/2)),(x+(w/2)-r),(y-(h/2)));
  line((x-(w/2)),(y+(h/2)-r),(x-(w/2)),(y-(h/2)+r));
  arc((x-(w/2)+r),(y-(h/2)+r),90,180,r);
  arc((x+(w/2)-r),(y-(h/2)+r),0,90,r);
  arc((x+(w/2)-r),(y+(h/2)-r),-90,0,r);
  arc((x-(w/2)+r),(y+(h/2)-r),-180,-90,r);
  setcolor(tshadow);
  outtextxy(x+1-(textwidth(c)/2),y+1-(textheight(c)/2),c);
  setcolor(tcolor);
  outtextxy(x-(textwidth(c)/2),y-(textheight(c)/2),c);
 }
 else
 {
  printf("Radius is greater than the height of the Curved Rectangle");
 }
}
void roundrectext(int x,int y,int w,int h,char c[100], int color, int tcolor, int tshadow)
{
 setcolor(color);
 line((x-(w/2)+(h/2)),(y+(h/2)),(x+(w/2)-(h/2)),(y+(h/2)));
 line((x-(w/2)+(h/2)),(y-(h/2)),(x+(w/2)-(h/2)),(y-(h/2)));
 arc((x-(w/2)+(h/2)),y,90,270,(h/2));
 arc((x+(w/2)-(h/2)),y,-90,90,(h/2));
 setcolor(tshadow);
 outtextxy(x+1-(textwidth(c)/2),y+1-(textheight(c)/2),c);
 setcolor(tcolor);
 outtextxy(x-(textwidth(c)/2),y-(textheight(c)/2),c);
}
void curverectextfill(int x,int y,int w, int h, int r, char c[100], int color, int tcolor,int tshadow, int fillcolor, int fillstyle)
{
 if(!((h/2)<r))
 {
  setcolor(color);
  line((x-(w/2)+r),(y+(h/2)),(x+(w/2)-r),(y+(h/2)));
  line((x+(w/2)),(y+(h/2)-r),(x+(w/2)),(y-(h/2)+r));
  line((x-(w/2)+r),(y-(h/2)),(x+(w/2)-r),(y-(h/2)));
  line((x-(w/2)),(y+(h/2)-r),(x-(w/2)),(y-(h/2)+r));
  arc((x-(w/2)+r),(y-(h/2)+r),90,180,r);
  arc((x+(w/2)-r),(y-(h/2)+r),0,90,r);
  arc((x+(w/2)-r),(y+(h/2)-r),-90,0,r);
  arc((x-(w/2)+r),(y+(h/2)-r),-180,-90,r);
  setfillstyle(fillstyle,fillcolor);
  delay(100);
  floodfill(x,y,color);
  setcolor(tshadow);
  outtextxy(x+1-(textwidth(c)/2),y+1-(textheight(c)/2),c);
  setcolor(tcolor);
  outtextxy(x-(textwidth(c)/2),y-(textheight(c)/2),c);
 }
 else
 {
  printf("Radius is greater than the height of the Curved Rectangle");
 }
}
void roundrectextfill(int x,int y,int w,int h,char c[100], int color, int tcolor, int tshadow, int fillcolor, int fillstyle)
{
 setcolor(color);
 line((x-(w/2)+(h/2)),(y+(h/2)),(x+(w/2)-(h/2)),(y+(h/2)));
 line((x-(w/2)+(h/2)),(y-(h/2)),(x+(w/2)-(h/2)),(y-(h/2)));
 arc((x-(w/2)+(h/2)),y,90,270,(h/2));
 arc((x+(w/2)-(h/2)),y,-90,90,(h/2));
 setfillstyle(fillstyle,fillcolor);
 delay(100);
 floodfill(x,y,color);
 setcolor(tshadow);
 outtextxy(x+1-(textwidth(c)/2),y+1-(textheight(c)/2),c);
 setcolor(tcolor);
 outtextxy(x-(textwidth(c)/2),y-(textheight(c)/2),c);
}
void curverecfill(int x,int y,int w, int h, int r, int color, int fillcolor, int fillstyle)
{
 if(!((h/2)<r))
 {
  setcolor(color);
  line((x-(w/2)+r),(y+(h/2)),(x+(w/2)-r),(y+(h/2)));
  line((x+(w/2)),(y+(h/2)-r),(x+(w/2)),(y-(h/2)+r));
  line((x-(w/2)+r),(y-(h/2)),(x+(w/2)-r),(y-(h/2)));
  line((x-(w/2)),(y+(h/2)-r),(x-(w/2)),(y-(h/2)+r));
  arc((x-(w/2)+r),(y-(h/2)+r),90,180,r);
  arc((x+(w/2)-r),(y-(h/2)+r),0,90,r);
  arc((x+(w/2)-r),(y+(h/2)-r),-90,0,r);
  arc((x-(w/2)+r),(y+(h/2)-r),-180,-90,r);
  setfillstyle(fillstyle,fillcolor);
  delay(100);
  floodfill(x,y,color);
 }
 else
 {
  printf("Radius is greater than the height of the Curved Rectangle");
 }
}
void roundrecfill(int x,int y,int w,int h, int color, int fillcolor, int fillstyle)
{
 setcolor(color);
 line((x-(w/2)+(h/2)),(y+(h/2)),(x+(w/2)-(h/2)),(y+(h/2)));
 line((x-(w/2)+(h/2)),(y-(h/2)),(x+(w/2)-(h/2)),(y-(h/2)));
 arc((x-(w/2)+(h/2)),y,90,270,(h/2));
 arc((x+(w/2)-(h/2)),y,-90,90,(h/2));
 setfillstyle(fillstyle,fillcolor);
 delay(100);
 floodfill(x,y,color);
}
void contrastcurverec(int x,int y,int w, int h, int r,int color,int shadow)
{
 if(!((h/2)<r))
 {
  setcolor(shadow);
  line((x-(w/2)+r+1),(y+(h/2)+1),(x+(w/2)-r+1),(y+(h/2)+1));
  line((x+(w/2)+1),(y+(h/2)-r+1),(x+(w/2)+1),(y-(h/2)+r+1));
  line((x-(w/2)+r+1),(y-(h/2)+1),(x+(w/2)-r+1),(y-(h/2)+1));
  line((x-(w/2)+1),(y+(h/2)-r+1),(x-(w/2)+1),(y-(h/2)+r+1));
  arc((x-(w/2)+r+1),(y-(h/2)+r+1),90,180,r);
  arc((x+(w/2)-r+1),(y-(h/2)+r+1),0,90,r);
  arc((x+(w/2)-r+1),(y+(h/2)-r+1),-90,0,r);
  arc((x-(w/2)+r+1),(y+(h/2)-r+1),-180,-90,r);
  setcolor(color);
  line((x-(w/2)+r),(y+(h/2)),(x+(w/2)-r),(y+(h/2)));
  line((x+(w/2)),(y+(h/2)-r),(x+(w/2)),(y-(h/2)+r));
  line((x-(w/2)+r),(y-(h/2)),(x+(w/2)-r),(y-(h/2)));
  line((x-(w/2)),(y+(h/2)-r),(x-(w/2)),(y-(h/2)+r));
  arc((x-(w/2)+r),(y-(h/2)+r),90,180,r);
  arc((x+(w/2)-r),(y-(h/2)+r),0,90,r);
  arc((x+(w/2)-r),(y+(h/2)-r),-90,0,r);
  arc((x-(w/2)+r),(y+(h/2)-r),-180,-90,r);
 }
 else
 {
  printf("Radius is greater than the height of the Curved Rectangle");
 }
}
void contrastroundrec(int x,int y,int w,int h,int color,int shadow)
{
 setcolor(shadow);
 line((x-(w/2)+(h/2)+1),(y+(h/2)+1),(x+(w/2)-(h/2)+1),(y+(h/2)+1));
 line((x-(w/2)+(h/2)+1),(y-(h/2)+1),(x+(w/2)-(h/2)+1),(y-(h/2)+1));
 arc((x-(w/2)+(h/2)+1),y+1,90,270,(h/2));
 arc((x+(w/2)-(h/2)+1),y+1,-90,90,(h/2));
 setcolor(color);
 line((x-(w/2)+(h/2)),(y+(h/2)),(x+(w/2)-(h/2)),(y+(h/2)));
 line((x-(w/2)+(h/2)),(y-(h/2)),(x+(w/2)-(h/2)),(y-(h/2)));
 arc((x-(w/2)+(h/2)),y,90,270,(h/2));
 arc((x+(w/2)-(h/2)),y,-90,90,(h/2));
}
void contrastcurverectext(int x,int y,int w, int h, int r,char c[100],int color,int shadow, int tcolor, int tshadow)
{
 if(!((h/2)<r))
 {
  setcolor(shadow);
  line((x-(w/2)+r+1),(y+(h/2)+1),(x+(w/2)-r+1),(y+(h/2)+1));
  line((x+(w/2)+1),(y+(h/2)-r+1),(x+(w/2)+1),(y-(h/2)+r+1));
  line((x-(w/2)+r+1),(y-(h/2)+1),(x+(w/2)-r+1),(y-(h/2)+1));
  line((x-(w/2)+1),(y+(h/2)-r+1),(x-(w/2)+1),(y-(h/2)+r+1));
  arc((x-(w/2)+r+1),(y-(h/2)+r+1),90,180,r);
  arc((x+(w/2)-r+1),(y-(h/2)+r+1),0,90,r);
  arc((x+(w/2)-r+1),(y+(h/2)-r+1),-90,0,r);
  arc((x-(w/2)+r+1),(y+(h/2)-r+1),-180,-90,r);
  setcolor(color);
  line((x-(w/2)+r),(y+(h/2)),(x+(w/2)-r),(y+(h/2)));
  line((x+(w/2)),(y+(h/2)-r),(x+(w/2)),(y-(h/2)+r));
  line((x-(w/2)+r),(y-(h/2)),(x+(w/2)-r),(y-(h/2)));
  line((x-(w/2)),(y+(h/2)-r),(x-(w/2)),(y-(h/2)+r));
  arc((x-(w/2)+r),(y-(h/2)+r),90,180,r);
  arc((x+(w/2)-r),(y-(h/2)+r),0,90,r);
  arc((x+(w/2)-r),(y+(h/2)-r),-90,0,r);
  arc((x-(w/2)+r),(y+(h/2)-r),-180,-90,r);
  setcolor(tshadow);
  outtextxy(x+1-(textwidth(c)/2),y+1-(textheight(c)/2),c);
  setcolor(tcolor);
  outtextxy(x-(textwidth(c)/2),y-(textheight(c)/2),c);
 }
 else
 {
  printf("Radius is greater than the height of the Curved Rectangle");
 }
}
void contrastroundrectext(int x,int y,int w,int h,char c[100],int color,int shadow, int tcolor, int tshadow)
{
 setcolor(shadow);
 line((x-(w/2)+(h/2)+1),(y+(h/2)+1),(x+(w/2)-(h/2)+1),(y+(h/2)+1));
 line((x-(w/2)+(h/2)+1),(y-(h/2)+1),(x+(w/2)-(h/2)+1),(y-(h/2)+1));
 arc((x-(w/2)+(h/2)+1),y+1,90,270,(h/2));
 arc((x+(w/2)-(h/2)+1),y+1,-90,90,(h/2));
 setcolor(color);
 line((x-(w/2)+(h/2)),(y+(h/2)),(x+(w/2)-(h/2)),(y+(h/2)));
 line((x-(w/2)+(h/2)),(y-(h/2)),(x+(w/2)-(h/2)),(y-(h/2)));
 arc((x-(w/2)+(h/2)),y,90,270,(h/2));
 arc((x+(w/2)-(h/2)),y,-90,90,(h/2));
 setcolor(tshadow);
 outtextxy(x+1-(textwidth(c)/2),y+1-(textheight(c)/2),c);
 setcolor(tcolor);
 outtextxy(x-(textwidth(c)/2),y-(textheight(c)/2),c);
}
void contrastcurverectextfill(int x,int y,int w, int h, int r,char c[100],int color,int shadow, int tcolor, int tshadow,int fillcolor,int fillstyle)
{
 if(!((h/2)<r))
 {
  setcolor(shadow);
  line((x-(w/2)+r+1),(y+(h/2)+1),(x+(w/2)-r+1),(y+(h/2)+1));
  line((x+(w/2)+1),(y+(h/2)-r+1),(x+(w/2)+1),(y-(h/2)+r+1));
  line((x-(w/2)+r+1),(y-(h/2)+1),(x+(w/2)-r+1),(y-(h/2)+1));
  line((x-(w/2)+1),(y+(h/2)-r+1),(x-(w/2)+1),(y-(h/2)+r+1));
  arc((x-(w/2)+r+1),(y-(h/2)+r+1),90,180,r);
  arc((x+(w/2)-r+1),(y-(h/2)+r+1),0,90,r);
  arc((x+(w/2)-r+1),(y+(h/2)-r+1),-90,0,r);
  arc((x-(w/2)+r+1),(y+(h/2)-r+1),-180,-90,r);
  setcolor(color);
  line((x-(w/2)+r),(y+(h/2)),(x+(w/2)-r),(y+(h/2)));
  line((x+(w/2)),(y+(h/2)-r),(x+(w/2)),(y-(h/2)+r));
  line((x-(w/2)+r),(y-(h/2)),(x+(w/2)-r),(y-(h/2)));
  line((x-(w/2)),(y+(h/2)-r),(x-(w/2)),(y-(h/2)+r));
  arc((x-(w/2)+r),(y-(h/2)+r),90,180,r);
  arc((x+(w/2)-r),(y-(h/2)+r),0,90,r);
  arc((x+(w/2)-r),(y+(h/2)-r),-90,0,r);
  arc((x-(w/2)+r),(y+(h/2)-r),-180,-90,r);
  setfillstyle(fillstyle,fillcolor);
  delay(100);
  floodfill(x,y,color);
  setcolor(tshadow);
  outtextxy(x+1-(textwidth(c)/2),y+1-(textheight(c)/2),c);
  setcolor(tcolor);
  outtextxy(x-(textwidth(c)/2),y-(textheight(c)/2),c);
 }
 else
 {
  printf("Radius is greater than the height of the Curved Rectangle");
 }
}
void contrastroundrectextfill(int x,int y,int w,int h,char c[100],int color,int shadow, int tcolor, int tshadow,int fillcolor,int fillstyle)
{
 setcolor(shadow);
 line((x-(w/2)+(h/2)+1),(y+(h/2)+1),(x+(w/2)-(h/2)+1),(y+(h/2)+1));
 line((x-(w/2)+(h/2)+1),(y-(h/2)+1),(x+(w/2)-(h/2)+1),(y-(h/2)+1));
 arc((x-(w/2)+(h/2)+1),y+1,90,270,(h/2));
 arc((x+(w/2)-(h/2)+1),y+1,-90,90,(h/2));
 setcolor(color);
 line((x-(w/2)+(h/2)),(y+(h/2)),(x+(w/2)-(h/2)),(y+(h/2)));
 line((x-(w/2)+(h/2)),(y-(h/2)),(x+(w/2)-(h/2)),(y-(h/2)));
 arc((x-(w/2)+(h/2)),y,90,270,(h/2));
 arc((x+(w/2)-(h/2)),y,-90,90,(h/2));
 setfillstyle(fillstyle,fillcolor);
 delay(100);
 floodfill(x,y,color);
 setcolor(tshadow);
 outtextxy(x+1-(textwidth(c)/2),y+1-(textheight(c)/2),c);
 setcolor(tcolor);
 outtextxy(x-(textwidth(c)/2),y-(textheight(c)/2),c);
}