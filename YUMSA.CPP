#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
cout<<"enter the numbers";
cin>>a,b,c;
if((a>b)&&(a>c))
cout<<"a is large";
else if((b>a)&&(b>c))
cout<<"b is large";
else
cout<<"c is large";
getch();
}
