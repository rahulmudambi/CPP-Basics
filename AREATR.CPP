#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,s,r;
clrscr();
cout<<"enter the sides of the triangle";
cin>>a>>b>>c;
s=(a+b+c)/2;
r=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"the area of the triangle  is "<<r<<endl;
getch();
}

