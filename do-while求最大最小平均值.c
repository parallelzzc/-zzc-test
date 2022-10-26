#include<stdio.h>

int main(void)
{
	int a,max,min,b;
	int count=0;
	double sum=0;
	double avg;
	
	scanf("%d",&b);
	max=b;
	min=b;
	sum=b;
	count++;
	
	do{
		scanf("%d",&a);
		if(a>0){
		if(a>max){
			max=a;
		}
		if(a<min){
			min=a;
		}
		count++;
	}
		sum+=a;
	}while(a!=0);
	
	avg=sum/count;
	printf("max=%d,min=%d,avg=%.2f",max,min,avg);
	
	return 0;
}