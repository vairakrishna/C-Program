#include<stdio.h>
void main()
{
int n,i,f=0;
printf("Enter a number");
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%i==0)
{
f=1;
break;
}
}
if(f==0)
{
printf("Entered number is a prime number");
}
else
{
printf("Entered number is not a prime number");
}
}
