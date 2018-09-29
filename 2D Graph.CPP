#include <graphics.h> e
#include <conio.h>
#include<iostream.h>

int main()
{
   int gd = DETECT, gm;
   int array[20];
   int c1,c2,p,q;
   cout<<"enter constatnt of x & y and power and constatnt";
   cin>>c1>>c2>>p>>q;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   for(int g=0;g<20;g++)
   { array[g]=(q-(c1*g*g))/c2;}


   setcolor(YELLOW);
   rectangle(0,30,639,450);
   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
   setcolor(WHITE);
   outtextxy(275,0,"Bar Chart");

   setlinestyle(SOLID_LINE,0,2);

   line(100,420,100,60);
   line(100,420,600,420);
   line(90,70,100,60);
   line(110,70,100,60);
   line(590,410,600,420);
   line(590,430,600,420);

   outtextxy(95,35,"Y");
   outtextxy(610,405,"X");
   outtextxy(85,415,"O");

   for(g=0;g<20;g++)
   {

   setfillstyle(LINE_FILL,BLUE);
   bar(0,g,200,array[g]);
   }



   getch();
   return 0;}