#include<stdio.h>
main()
{ 
int n,c,rev=0,s;
printf("enter number n=");
scanf("%d",&n);
c=n;
while(c>0)
{
s=c%10;
rev= (rev*10)+s;
c=c/10;
}
if(n==rev)
{
printf("%d is palindrom number",n);
}
else
{
printf("%d is not palindrom number",n);
}
	
	
}

