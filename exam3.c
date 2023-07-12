#include<stdio.h>
main()
{
	int fd,ld,sum=0,n;
	printf("enter number n=");
	scanf("%d",&n);
	ld=n%10;
	
	while(n>=10)
	{
		
		n=n/10;
		
	}
	fd=n;
	sum=ld+fd;
	printf("sum=%d",sum);
}
