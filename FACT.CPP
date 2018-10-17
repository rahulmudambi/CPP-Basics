#include<iostream.h>
#include<conio.h>
void main()
{
int fact,rem;
int n;
clrscr();
cout<<"enter the number";
cin>>n;
fact=1;
do
{
fact=fact*n;
n=n-1;
}while(n!=1);
cout<<fact<<endl;
getch();
}

