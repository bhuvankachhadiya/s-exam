#include<stdio.h>
main()
{
	int fd,ld,sum,n;
	printf("enter number n=");
	scanf("%d",&n);
	ld=n%10;
	fd=n/10;
	while(n>0)
	{
		ld=n%10;
		fd=n/10;
	}
	sum=ld+fd;
	printf("sum=%d",sum);
}
