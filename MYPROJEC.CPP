# include<iostream.h>
# include<conio.h>
#include<process.h>
# include<math.h>
# include<graphics.h>
# include<dos.h>
# include<string.h>
class calculator{ int m,n;
		 float a,b,c,d,e,f,g,h,i;


	      public:
	      void trignometry(void);
	      void basic (void);
	      void additional(void);
	      void polygons(void);
	      void front(void);
	      void front1(void);
	      };
void calculator::trignometry(void)
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
settextstyle(1,0,3);
setcolor(LIGHTCYAN);
setbkcolor(BLACK);
settextstyle(1,0,3);
outtextxy(0,400,"CALCULATOR");
outtextxy(350,400,"MADE BY SHAHID");
rectangle(1,1,550,398);
rectangle(3,3,547,395);
setfillstyle(1,RED);
rectangle(1,300,547,395);
floodfill(50,350,LIGHTCYAN);
settextstyle(1,0,1);
outtextxy(3,300,"1- FOR SIN");
outtextxy(200,300,"2- FOR COS") ;
outtextxy(400,300,"3-FOR TAN");
outtextxy(3,330,"4- FOR COSEC");
outtextxy(200,330,"5-FOR SEC");
outtextxy(400,330,"6-FOR COT");
outtextxy(200,360,"7-FOR EXIT");
outtextxy(3,10,"ENTER YOUR CHOICE");
rectangle(3,10,200,30);
rectangle(3,40,50,64);
line(3,150,550,150);
line(3,154,550,154);
cout<<"\n\n\n   ";
cin>>m;
sound(2000);
delay(130);
nosound();
switch(m)
{ case 1:
settextstyle(1,0,1);
outtextxy(3,78,"ENTER THE ANGLE IN RADIANS");
rectangle(3,78,281,100);
rectangle(3,110,50,135);
rectangle(3,165,200,220);
outtextxy(30,165,"ANSWER IS:");
cout<<"\n\n\n  " ;
cin>>a;
sound(2000);
delay(130);
nosound();
a=sin(a);
cout<<"\n\n\n\n\t"<<a;
break;
case 2:
settextstyle(1,0,1);
outtextxy(3,78,"ENTER THE ANGLE IN RADIANS");
rectangle(3,78,281,100);
rectangle(3,110,50,135);
rectangle(3,165,200,220);
outtextxy(30,165,"ANSWER IS:");
cout<<"\n\n\n  " ;
cin>>a;
sound(2000);
delay(130);
nosound();
a=cos(a);
cout<<"\n\n\n\n\t"<<a;
break;
case 3:
settextstyle(1,0,1);
outtextxy(3,78,"ENTER THE ANGLE IN RADIANS");
rectangle(3,78,281,100);
rectangle(3,110,50,135);
rectangle(3,165,200,220);
outtextxy(30,165,"ANSWER IS:");
cout<<"\n\n\n  " ;
cin>>a;
sound(2000);
delay(130);
nosound();
a=tan(a);
cout<<"\n\n\n\n\t"<<a;
break;
case 4:
settextstyle(1,0,1);
outtextxy(3,78,"ENTER THE ANGLE IN RADIANS");
rectangle(3,78,281,100);
rectangle(3,110,50,135);
rectangle(3,165,200,220);
outtextxy(30,165,"ANSWER IS:");
cout<<"\n\n\n  " ;
cin>>a;
sound(2000);
delay(130);
nosound();
a=1/sin(a);
cout<<"\n\n\n\n\t"<<a;
break;
case 5:
settextstyle(1,0,1);
outtextxy(3,78,"ENTER THE ANGLE IN RADIANS");
rectangle(3,78,281,100);
rectangle(3,110,50,135);
rectangle(3,165,200,220);
outtextxy(30,165,"ANSWER IS:");
cout<<"\n\n\n  " ;
cin>>a;
 sound(2000);
delay(130);
nosound();
a=1/cos (a);
cout<<"\n\n\n\n\t"<<a;
break;
case 6:
settextstyle(1,0,1);
outtextxy(3,78,"ENTER THE ANGLE IN RADIANS");
rectangle(3,78,281,100);
rectangle(3,110,50,135);
rectangle(3,165,200,220);
outtextxy(30,165,"ANSWER IS:");
cout<<"\n\n\n  " ;
cin>>a;
sound(2000);
delay(130);
nosound();
a=1/tan(a);
cout<<"\n\n\n\n\t"<<a;
break;
case 7:
exit(0) ;
break;
}}
void calculator::basic(void)
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
settextstyle(1,0,3);
setcolor(LIGHTCYAN);
setbkcolor(BLACK);
settextstyle(1,0,3);
outtextxy(0,450,"CALCULATOR");
outtextxy(350,450,"MADE BY SHAHID");
rectangle(1,1,600,450);
rectangle(3,3,597,450);
setfillstyle(1,RED);
rectangle(1,397,600,450);
floodfill(50,400,LIGHTCYAN);
settextstyle(1,0,1);
settextstyle(1,0,1);
outtextxy(3,397,"1- FOR ADDITION");
outtextxy(174,397,"2- FOR SUBSTRACTION") ;
outtextxy(390,397,"3-FOR MULTIPLY");
outtextxy(160,430,"4- FOR DIVIDE");
outtextxy(330,430,"5- FOR EXIT");
cout<<"\n\t\t  ";
cin>>a;
sound(2000);
delay(130);
nosound();
cout<<"\noperation = ";
cin>>m;
sound(2000);
delay(130);
nosound();
switch (m)
{ case 1:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>b;
a=a+b;
cout<<"="<< a;
break;
case 2:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>b;
a=a-b;
cout<<"="<< a;
break;
case 3:
cout<<"\t\t  ";
sound(2000);
delay(130);
nosound();
cin>>b;
a=a*b;
cout<<"="<< a;
break;
case 4:
cout<<"\t\t  ";
sound(2000);
delay(130);
nosound();
cin>>b;
a=a/b;
cout<<"="<< a;
break;
case 5:
cout<<"bye bye ";
exit(0);
cout<<"now n=";
} cout<<"\noperation = ";
sound(2000);
delay(130);
nosound();
cin>> n ;
switch(n)
{case 1:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>c;
a=a+c;
cout<<a;
break;
case 2:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>c;
a=a-c;
cout<<a;
break;
case 3:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>c;
a=a*c;
cout<<a;
break;
case 4:
cout<<"\t\t  ";
sound(2000);
delay(130);
nosound();
cin>>c;
a=a/c;
cout<<a;
break;
case 5:
cout<<"bye bye ";
exit(0);
cout<<"now n=";
break;
} cout<<"\noperation =";
sound(2000);
delay(130);
nosound();
cin>>n;
switch(n)
{case 1:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>d;
a=a+d;
cout<<a;
break;
case 2:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>d;
a=a-d;
cout<<a;
break;
case 3:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>d;
a=a*d;
cout<<a;
break;
case 4:
cout<<"\t\t   ";
 sound(2000);
delay(130);
nosound();
cin>>d;
a=a/d;
cout<<a;
break;
case 5:
cout<<"bye bye ";
exit(0);
cout<<"now n=";
break;
}cout<<"\noperation =";
sound(2000);
delay(130);
nosound();
cin>>n ;
switch(n)
{case 1:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>i;
a=a+i;
cout<<a;
break;
case 2:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>i;
a=a-i;
cout<<a;
break;
case 3:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>e;
a=a*i;
cout<<a;
break;
case 4:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>i;
a=a/i;
cout<<a;
break;
case 5:
cout<<"bye bye ";
exit(0);
cout<<"now n=";
break;
}
cout<<"\noperation =";
sound(2000);
delay(130);
nosound();
cin>>n ;
switch(n)
{case 1:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>e;
a=a+e;
cout<<a;
break;
case 2:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>e;
a=a-e;
cout<<a;
break;
case 3:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>e;
a=a*e;
cout<<a;
break;
case 4:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>e;
a=a/e;
cout<<a;
break;
case 5:
cout<<"bye bye ";
exit(0);
cout<<"now n=";
break;
}
cout<<"\noperation =";
sound(2000);
delay(130);
nosound();
cin>>n;
switch(n)
{case 1:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>f;
a=a+f;
cout<<a;
break;
case 2:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>f;
a=a-f;
cout<<a;
break;
case 3:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>f;
a=a*f;
cout<<a;
break;
case 4:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>f;
a=a/f;
cout<<a;
break;
case 5:
cout<<"bye bye ";
exit(0);
cout<<"now n=";
break;
}
cout<<"\noperation =";
sound(2000);
delay(130);
nosound();
cin>>n;
switch(n)
{case 1:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>g;
a=a+g;
cout<<a;
break;
case 2:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>g;
a=a-e;
cout<<a;
break;
case 3:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>g;
a=a*g;
cout<<a;
break;
case 4:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>g;
a=a/g;
cout<<a;
break;
case 5:
cout<<"bye bye ";
exit(0);
cout<<"now n=";
break;
}
cout<<"\nlast operation =";
sound(2000);
delay(130);
nosound();
cin>>n;
switch(n)
{case 1:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>e;
a=a+h;
cout<<a;
break;
case 2:
cout<<"\t\t    ";
sound(2000);
delay(130);
nosound();
cin>>h;
a=a-h;
cout<<a;
break;
case 3:
cout<<"\t\t    ";
sound(2000);
delay(130);
nosound();
cin>>h;
a=a*h;
cout<<a;
break;
case 4:
cout<<"\t\t   ";
sound(2000);
delay(130);
nosound();
cin>>h;
a=a/h;
cout<<a;
break;
case 5:
cout<<"bye bye ";
exit(0);
cout<<"now n=";
break;
}}
void calculator::additional(void)
{int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
settextstyle(1,0,3);
setcolor(LIGHTCYAN);
setbkcolor(BLACK);
settextstyle(1,0,3);
outtextxy(0,400,"CALCULATOR");
outtextxy(350,400,"MADE BY SHAHID");
rectangle(1,1,550,398);
rectangle(3,3,547,395);
setfillstyle(1,RED);
rectangle(1,300,547,395);
floodfill(50,350,LIGHTCYAN);
settextstyle(1,0,1);
outtextxy(3,300,"1-FOR LOG");
outtextxy(167,300,"2-FOR POWER");
outtextxy( 360,300,"3-FOR SQUAREROOT");
outtextxy( 3,360,"4-FOR PERCENTAGE");
outtextxy(197,360,"5-FOR LOG10");
outtextxy(390,360,"6-FOR EXIT");
sound(2000);
delay(130);
nosound();
cout<<"\n\n  ";
cin>>m;
switch(m)
{ case 1:
outtextxy(20,60,"ENTER THE VALUE:");
sound(2000);
delay(130);
nosound();
cout<<"\n\n\n  ";
cin>>a;
a=log(a);
setcolor(RED);
outtextxy(20,120,"THE RESULT IS:");
cout<<"\n\n\n  ";
cout<<a;
break;
 case 2:
 int b;
outtextxy(20,60,"ENTER THE VALUE OF BASE:");
 sound(2000);
delay(130);
nosound();
cout<<"\n\n\n  ";
 cin>>a;
 setcolor(YELLOW);
 outtextxy(20,110,"ENTER THE VALUE OF POWER:");
 sound(2000);
delay(130);
nosound();
cout<<"\n\n  ";
 cin>>b;
 a= pow(a,b);
 setcolor(RED);
 outtextxy(20,160,"THE RESULT IS: ");
 cout<<"\n\n  ";
 cout<<a;
 break;
 case 3:
 setcolor(CYAN);
 outtextxy(15,60,"ENTER THE VALUE;");
 sound(2000);
 delay(130);
 nosound();
 cout<<"\n\n  ";
 cin>>a;
 a=sqrt(a);
 sound(2000);
 delay(130);
 nosound();
 setcolor(RED);
  outtextxy(20,110,"THE RESULT IS:");
 cout<<"\n\n\n  "<<a;
 break;
 case 4:
 outtextxy(20,60,"ENTER THE VALUE");
 sound(2000);
 delay(130);
 nosound();
 cout<<"\n\n\n  ";
 cin>>a;
 setcolor(YELLOW);
 outtextxy(20,120,"PERCENT OUT OF");
 sound(2000);
 delay(130);
 nosound();
 cout<<"\n\n  ";
 cin>>b;
 c=(a*100)/b;
 setcolor(RED);
 outtextxy(20,180,"THE REULUT IS");
 sound(2000);
 delay(130);
 nosound();
 cout<<"\n\n\n "<<c;
 break;
 case 5:
 setcolor(YELLOW);
 outtextxy(20,60,"ENTER THE VALUE");
 sound(2000);
 delay(130);
 nosound();
 cout<<"\n\n\n  ";
 cin>>a;
 a=log10(a);
 setcolor(GREEN);
 outtextxy(20,120,"THE RESULT IS");
 cout<<"\n\n  ";
 cout<<a;
 break;
 case 6:
 cout<<"BYE BYE";
 exit(0);
break;
}}
void calculator::polygons(void)
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
settextstyle(1,0,3);
setcolor(LIGHTCYAN);
setbkcolor(BLACK);
settextstyle(1,0,3);
outtextxy(0,400,"CALCULATOR");
outtextxy(350,400,"MADE BY SHAHID");
rectangle(1,1,550,398);
rectangle(3,3,547,395);
setfillstyle(1,RED);
rectangle(1,300,547,395);
floodfill(50,350,LIGHTCYAN);
setcolor(GREEN);
settextstyle(1,0,1);
outtextxy(3,300,"1-FOR CIRCLE");
outtextxy(167,300,"2-FOR RECTANGLE");
outtextxy( 360,300,"3-FOR SQUARE");
outtextxy( 3,360,"4-FOR RHOMBUS ");
outtextxy(197,360,"5-FOR TRAPEZIUM");
outtextxy(390,360,"6-FOR EXIT");
cout<<"\n\n\n  ";
outtextxy(50,20,"ENTER YOUR CHIOICE");
cin>>m;
switch(m)
{case 1:
float pi=3.14;
setcolor(WHITE);
setfillstyle(1,LIGHTCYAN);
circle(400,200,65);
floodfill(403,203,WHITE);
outtextxy(20,60,"ENTER RADIUS OF CIRCLE");
cout<<"\n\n  "  ;
sound(2000);
delay(130);
nosound();
cin>>a;
a=pi*a*a;
setcolor(GREEN);
outtextxy(23,110,"THE REULT IS:");
sound(2000);
delay(130);
nosound();
cout<<"\n\n "<<a;
break;
case 2:
setfillstyle(1,LIGHTCYAN);
rectangle(380,60,480,120);
floodfill(402,61,GREEN);
outtextxy(20,60,"ENTER LENGTH:");
sound(2000);
delay(130);
nosound();
cout<<"\n\n  " ;
cin>>a;
outtextxy(20,120,"ENTER BREADTH:");
sound(2000);
delay(130);
nosound();
cout<<"\n\n  ";
cin>>b;
a=a*b;
sound(2000);
delay(130);
nosound();
outtextxy(20,180,"THE RESULT IS:");
cout<<"\n\n\n  "<<a;
break;
case 3:
setfillstyle(1,LIGHTCYAN);
rectangle(400,80,500,180);
floodfill(406,87,GREEN);
outtextxy(20,60,"ENTER THE SIDE");
sound(2000);
delay(130);
nosound();
setcolor(YELLOW);
cout<<"\n\n  ";
cin>>a;
a=a*a;
sound(2000);
delay(130);
nosound();
outtextxy(20,120,"THE AREA IS");
cout<<"\n\n  "<<a;
break;
case 4:
setcolor(LIGHTCYAN);
outtextxy(20,60,"ENTER ONE DIAGONAL:");
sound(2000);
delay(130);
nosound();
cout<<"\n\n\n  ";
cin>>a;
outtextxy(20,120,"ENTER SECOND DIAGONAL:");
sound(2000);
delay(130);
nosound();
cout<<"\n\n  ";
cin>>b;
a=(a*b)/2;
setcolor(YELLOW);
outtextxy(20,180,"THE AREA IS:");
cout<<"\n\n\n "<<a;
break;
case 5:
outtextxy(20,60,"ENTER THE TWO PARALLEL SIDES");
cout<<"\n\n\n  ";
sound(2000);
delay(130);
nosound();
cin>>a;
cout<<"\n  ";
sound(2000);
delay(130);
nosound();
cin>>b;
outtextxy(20,167,"ENTER THE HEIGHT");
sound(2000);
delay(130);
nosound();
cout<<"\n\n  ";
cin>>c;
a=((a+b)*c)/2;
sound(2000);
delay(130);
nosound();
setcolor(BROWN);
outtextxy(20,214,"THE AREA IS");
cout<<"\n\n  "<<a;
break;
case 6:
exit(0);
break;
}}
void calculator::front(void)
{int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(LIGHTCYAN);
setbkcolor(DARKGRAY);
settextstyle(1,0,3);
char arr[100]={"\n\n\n\t\t\t           PROJECT \n\n\n\t\t\t             ON\n\n\n\t\t       ADVANCED SCIENTIFIC CALCULATOR"};
char a[220]={"\n\n\n\n\n\n\n\n  SUBMITTED BY:\t\t\t\t\tSUBMITTED TO:\n  SHAHID SHABEER MALIK\t\t\t\tMR SUNIL RAWAT\n  ROLLNO: 17DCS064\t\t\t\tASSISTANT PROFESSOR\n  CLASS :III SEM (COMPUTER )\t\t\tUNIVERSITY POLYTECHNIC\n\t\t\t\t\t        JAMIA MILLIA ISLAMIA"};
for(i=1;i<=100;i=i+5)
{
outtextxy(0+i,20,"OBJECT ORIENTED PROGRAMING");
delay(100);
cleardevice();
}
outtextxy(140,20,"OBJECT ORIENTED PROGRAMING");
outtextxy(200,450,"DEVELOPED BY SHAHID");
  for(i=0;i<100;i++)
  {
 cout<<arr[i];
 delay(100);
 }
 for(i=0;i<220;i++)
 {
 cout<<a[i];
delay(100);
}
 }
void calculator::front1(void)
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
settextstyle(1,0,3);
setcolor(LIGHTCYAN);
sound (1000);
delay(300);
nosound();

for(i=1;i<=7;i++)
{
setbkcolor(i);
delay(300);
setfillstyle(1,RED);
circle(300,250,70);
floodfill(310,250,LIGHTCYAN);
settextstyle(1,0,23);
outtextxy(270,170,"9");
settextstyle(1,0,2);
outtextxy(200,450,"DEVELOPED BY SHAHID");

}
cleardevice();
sound(1300);
delay(300);
nosound();
 for(i=1;i<=7;i++)
{
setbkcolor(i);
delay(250);
setfillstyle(1,RED);
circle(300,250,70);
floodfill(310,250,LIGHTCYAN);
settextstyle(1,0,23);
outtextxy(270,170,"8");
settextstyle(1,0,2);
outtextxy(200,450,"DEVELOPED BY SHAHID");
}
 cleardevice() ;
 sound(1500);
delay(300);
nosound();
for(i=1;i<=7;i++)
{
setbkcolor(i);
delay(250);
setfillstyle(1,RED);
circle(300,250,70);
floodfill(310,250,LIGHTCYAN);
settextstyle(1,0,23);
outtextxy(270,170,"7");
settextstyle(1,0,2);
outtextxy(200,450,"DEVELOPED BY SHAHID"); }
 cleardevice();
 sound(1700);
delay(300);
nosound();
  for(i=1;i<=7;i++)
{
setbkcolor(i);
delay(250);
setfillstyle(1,RED);
circle(300,250,70);
floodfill(310,250,LIGHTCYAN);
settextstyle(1,0,23);
outtextxy(270,170,"6");
settextstyle(1,0,2);
outtextxy(200,450,"DEVELOPED BY SHAHID");}
 cleardevice();
 sound(1900);
delay(300);
nosound();
  for(i=1;i<=7;i++)
{
setbkcolor(i);
delay(250);
setfillstyle(1,RED);
circle(300,250,70);
floodfill(310,250,LIGHTCYAN);
settextstyle(1,0,23);
outtextxy(270,170,"5");
settextstyle(1,0,2);
outtextxy(200,450,"DEVELOPED BY SHAHID");}
 cleardevice();
 sound(2100);
delay(300);
nosound();
  for(i=1;i<=7;i++)
{
setbkcolor(i);
delay(250);
setfillstyle(1,RED);
circle(300,250,70);
floodfill(310,250,LIGHTCYAN);
settextstyle(1,0,23);
outtextxy(270,170,"4");
settextstyle(1,0,2);
outtextxy(200,450,"DEVELOPED BY SHAHID");}
 cleardevice();
 sound(2300);
delay(300);
nosound();
  for(i=1;i<=7;i++)
{
setbkcolor(i);
delay(250);
setfillstyle(1,RED);
circle(300,250,70);
floodfill(310,250,LIGHTCYAN);
settextstyle(1,0,23);
outtextxy(270,170,"3");
settextstyle(1,0,2);
outtextxy(200,450,"DEVELOPED BY SHAHID");}
cleardevice();
 sound(2200);
delay(300);
nosound();
  for(i=1;i<=7;i++)
{
setbkcolor(i);
delay(250);
setfillstyle(1,RED);
circle(300,250,70);
floodfill(310,250,LIGHTCYAN);
settextstyle(1,0,23);
outtextxy(270,170,"2");
settextstyle(1,0,2);
outtextxy(200,450,"DEVELOPED BY SHAHID");}
 cleardevice();
 sound(2500);
delay(300);
nosound();
  for(i=1;i<=7;i++)
{
setbkcolor(i);
delay(250);
setfillstyle(1,RED);
circle(300,250,70);
floodfill(310,250,LIGHTCYAN);
settextstyle(1,0,23);
outtextxy(270,170,"1");
settextstyle(1,0,2);
outtextxy(200,450,"DEVELOPED BY SHAHID");}
 cleardevice();
sound(950);
delay(600);
sound(1000);
delay(550);
sound(1500);
delay(500);
sound(2000);
delay(400);
sound(2500);
delay(250);
nosound();
setbkcolor(RED);
setcolor(YELLOW);
setfillstyle(1,GREEN);
rectangle(0,100,600,160);
floodfill(1,110,YELLOW);

setfillstyle(1,YELLOW);
circle(300,300,100);
floodfill(300,300,YELLOW);
settextstyle(1,0,5);
outtextxy(25,100,"WELCOME TO THE PROJECT");
setcolor(BLUE);
arc(300,300,180,0,50);
settextstyle(1,0,1);
outtextxy(263,240,"0      0");
settextstyle(1,0,2);
outtextxy(200,450,"DEVELOPED BY SHAHID");
}
 void main()
{
clrscr();
calculator A;
A.front1();
getch();
A.front();
A.polygons();
getch();
A.trignometry();
getch();
}


