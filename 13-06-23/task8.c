#include<stdio.h>
void main()
{
	int c,r,k;
	for(r=1;r<=5;r++)
	{
		for(k=r;k>1;k--)		{
			printf(" ");
		}
		for(c=r;c<=5;c++)
		{
		   printf("%d",c);
		   	
		}
		printf("\n");
	}     
}