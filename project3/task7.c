#include <stdio.h>

int main(){

    int i,n,t1=0,t2=1;
    
    int next=t1+t2;
    
    printf("Enter Value : ");
    scanf("%d",&n);
    
    printf("Fibonacci series : %d %d",t1,t2);
    
    for(i=3;i<=n;++i){
    	
    	printf("%d",next);
    	
    	t1 = t2;
    	t2=next;
    	
    	next = t1 + t2;
	}

    return 0;
}

