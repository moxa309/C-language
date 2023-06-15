#include<stdio.h>
void main()
{
	char  c,r,k;
	for(r='E';r>='A';r--)
	{
		for(k=r;k<'E';k++)
		{
		printf(" ");
		}
		for(c='A';c<=r;c++)
		{
		   printf("%c",c);
		   	
		}
		printf("\n");
	}     
}