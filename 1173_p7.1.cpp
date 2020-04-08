//Part I: Exception Handling
#include<iostream.h>
#include<conio.h>
void main()
{
inta,b,x;
cout<<"Enter two values:";
cin>>a>>b;
x=a-b;
try{
if(x!=0)
{
cout<<a/x;
}
else
{
throw(x);
}
}
catch(inti)
{
cout<<"Cannot Divide Because value of X is:"<<i;
}
getch();
}
