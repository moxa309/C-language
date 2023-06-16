#include<stdio.h>
void main()
{
	int c,r;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
		   printf("%d",c%2);
		   	
		}
		printf("\n");
	}     
}