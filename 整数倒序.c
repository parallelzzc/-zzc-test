#include<stdio.h>

int main()
{
	int x;
	int ret=0;
	int digit;
	
	
	printf("enter:");
	scanf("%d",&x);
	
	
	do{
		digit=x%10;
		ret=ret*10+digit;
		printf("x=%d digit=%d ret=%d\n",x,digit,ret);
		x/=10;
	}while(x>0);
	
	printf("ret=%d",ret);
	
	return 0;
}