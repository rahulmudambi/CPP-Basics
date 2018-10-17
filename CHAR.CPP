#include<iostream.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
cout<<"enter an alphabet";
cin>>ch;
if((ch>='a')&&(ch<='z'))
cout<<"it is lowercase";
else
cout<<"it is an uppercase";
getch();
}
