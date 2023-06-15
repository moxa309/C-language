#include<stdio.h>
void main()
{
	char  c,r,k;
	for(r='A';r<='E';r++)
	{
		for(k=r;k<'E';k++)
		{
			printf(" ");
		}
		for(c=r;c>='A';c--)
		{
		   printf("%c",c);
		   	
		}
		printf("\n");
	}     
}