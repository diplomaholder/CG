#include<dos.h>
union REGS i,o;
int initmouse()
{
 i.x.ax = 0;
 int86(0x33,&i,&o);
 return o.x.ax;
}
void showmouseptr()
{
 i.x.ax = 1;
 int86(0x33,&i,&o);
}
void hidemouseptr()
{
 i.x.ax = 2;
 int86(0x33,&i,&o);
}
void getmousepos(int *button, int *x, int *y)
{
 i.x.ax = 3;
 int86(0x33,&i,&o);
 *button = o.x.bx;
 *x = o.x.cx;
 *y = o.x.dx;
}
void movemousepos(int x,int y)
{
 i.x.ax = 4;
 i.x.cx = x;
 i.x.dx = y;
 int86(0x33,&i,&o);
}
