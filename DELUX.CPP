   #include<graphics.h>
 #include <stdlib.h>
 #include <stdio.h>
 #include <conio.h>
 #include<dos.h>
 #include<string.h>


 void main(void)
 {           int gdriver = DETECT ,gmode;   clrscr();
initgraph(&gdriver,  &gmode,"C:/TURBOC3/BGI" );


    int maxx,i, maxy,midx,midy;   char str[10]="DELUXO",str2[45]="MY FIRST MOVING TRUCK";

    rectangle(0, 0, maxx, maxy);       midx = getmaxx() / 2;
midy = getmaxy() / 2;


   outtextxy(370,400,str);    setcolor(14);
   for(i=0;i<85;i++)
   {       circle(90+i,90,20);      printf("*");
			      setcolor(i);	  outtextxy(200,88,str2);
	 setcolor(i);                           printf("|^|");
    setfillstyle(HATCH_FILL,i+4);                      printf("*");
    circle(150-i, 200, 6);  circle(130-i,200,6);       setcolor(12);
  setfillstyle(SLASH_FILL,i+3);  bar(200-i,350,360-i,250);
   setcolor(i);    setfillstyle(HATCH_FILL,i+1);
     circle(330-i,365,14);  circle(200-i,365,14);
       setcolor(i);	   setfillstyle(HATCH_FILL,i+2);
	line(136-i,206,200-i,290);
       line(156-i,206,200-i,290);
	 setcolor(i+3);    setfillstyle(HATCH_FILL,i+8);
	 bar(180-i,320,160-i,340);  setcolor(9);
	   setfillstyle(HATCH_FILL,i+4);
	   line(200-i,250,160-i,290);
   line(160-i,290,200-i,290);
   line(160-i,350,200-i,350);
   line(160-i,290,160-i,350);
    /* fill in bounded region */setcolor(7);
      setfillstyle(HATCH_FILL,i+6);
      line(50,380,456,380);
	midx=maxx/2;   outtextxy(200,200,"DELUXO");
	     sound(397);delay(70);
			     nosound();   delay(70);
			      cleardevice();
			      }


   /* clean up */
   getch();
     closegraph();
     getch();

}

