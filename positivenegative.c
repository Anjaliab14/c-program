#include<stdio.h>
void main()
{
	float n;
	printf("enter the number n: ");
	scanf("%f",&n);
	if (n > 0)
	{
		printf("%f is a positive number",n);
	}
	else
	{
		printf("%f is a negative number",n);
	}
	printf("\n");
}
