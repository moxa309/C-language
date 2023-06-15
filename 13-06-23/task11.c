#include<stdio.h>
void main()
{
	int c,r,k;
	for(r=5;r>=1;r--)
	{
		for(k=r;k<=4;k++)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
		   printf("*",c);
		   	
		}
		printf("\n");
	}     
}