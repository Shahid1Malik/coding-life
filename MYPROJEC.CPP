# include<iostream.h>
# include<conio.h>
void main()
{ int n,a,b;
clrscr();
cout<<"\t\t\t WELCOME\n";
cout<<"\t\t   ENTER THE VALUE\n";
cout<<"a";
cin>>a;
cin>>n;
switch(n)
{case 1:
cout<<"+";
cin>>b;
a=a+b;
cout<<"the sum is"<<a;
break;
case 2:
cin>>b;
cout<<"-";
a-b;
a=a-b;
cout<<" the result is"<<a;
break;
}getch();
}



