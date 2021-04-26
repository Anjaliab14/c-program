#include<stdio.h>
void main()
{
	float n,p,c,m,per,total=300;
	printf("Enter the marks: ");
	scanf("%f%f%f",&p,&c,&m);
	n=p+c+m;
	per=(n*100)/total;
	printf("percentage = %f\n",per);
	if(n>=80)
	{
		printf(" %f Distinction",per);
	}
	else if(n>=60)
	{
		printf(" %f is First class", per);
	}	
	else if(n>=50)
	{
		printf("%f is Second class",per);
	}
	else if(n>=40)
	{
		printf("%f is Third class",per);
	}
	else 
	{
		printf("%f is Failed",per);
        }
	printf("\n");		

}
