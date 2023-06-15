#include<stdio.h>
void main()
{
	int c,r,k;
	for(r=1;r<=5;r++)
	{
		for(k=r;k<=4;k++)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
		   printf("%d",c);
		   	
		}
		printf("\n");
	}     
}