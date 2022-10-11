#include<stdio.h>

int main()
{
	int x;
	int ret=0;
	int d;
	
	scanf("%d",&x);
	int y=x;
	
	while(x>0){
		d=x%10;
		x/=10;
		ret=ret*10+d;
	}
	
	if(ret==y){
		printf("yes");
	}else{
		printf("no");
	}
	
	return 0;
}