#include<stdio.h>

int main()
{
	int n,m,i,d;
	int count=0;
	scanf("%d",&n);
	
	for(i=100;i<=n;i++){
		m=i;
		int sum=0;
		while(m>0){
			d=m%10;
			sum+=d*d*d;
			m/=10;
		}
		if(sum==i){
			count++;
			printf("%4d",i);
			if(count%2==0){
				printf("\n");
			}
		}
	}
	
	return 0;
}