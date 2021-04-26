#include<stdio.h>
void main()
{
	int n,m,i=1,p;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Enter the number of multiples: ");
	scanf("%d",&m);
	while(i<=m)
	{
		p=i*n;
		printf("%d * %d = %d\n",i,n,p);
		i++;
	}
}
