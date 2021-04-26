#include<stdio.h>
void main()
{
    int n=100,s=0,c=0;
    while(n<=500)
    {
	if(n%11==0)
    
	{
	   printf("%d\n",n);                                                               
	   s=s+n;
	   c=c+1;
	}
        n=n+1;
    }
    printf("the sum = %d\n",s);
    printf("count = %d\n",c);
    
}
