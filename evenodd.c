#include<stdio.h>
void main()
{
	int n;
	printf("enter the number n: ");
	scanf("%d",&n);
	if (n%2 == 0)
	{
		printf("%d is an even number",n);

	}
	else
	{
		printf("%d is an odd number",n);

	}
	printf("\n");
}
