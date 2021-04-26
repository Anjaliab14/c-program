#include<stdio.h>
void main()
{
	int n,sum=0,d;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("sum of the digits of %d is\n",n);
	while(n>0)
	{
		d=n%10;
		sum=sum+d;
		n=n/10;
	}
	printf("%d\n",sum);
	
}
