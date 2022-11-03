#include<stdio.h>

int main()
{
	int n,i;
	
	scanf("%d",&n);
	int fib[100]={1,1};
	
	for(i=2;i<n;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	int k;
	
	for(k=0;k<n;k++){
		printf("%5d",fib[k]);
		
		if((k+1)%5==0)
		printf("\n");
	}
	
	return 0;
}