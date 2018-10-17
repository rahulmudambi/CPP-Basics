#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
float a,b,c;
float const pi=3.141516;
clrscr();
cout<<"enter the radius";
cin>>a;
b=2*pi*a;
c=pi*a*a;
cout<<"the circum and area are"<<b<<" and "<<c<<endl;
getch();
}