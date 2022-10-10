#include<stdio.h>

int search(int key,int a[],int length);

int main(void)
{
	int a[]={2,4,16,17,18,23,25,26,31,97,190};
	int loc;
	int x;
	
	printf("enter:");
	scanf("%d",&x);
	
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	
	if(loc==-1){
		printf("不存在%d\n",x);
	}else{
		printf("%d在第%d个位置上",x,loc+1);
	}
	
	return 0;
}

int search(int key,int a[],int length)
{
	int ret=-1;
	int i;
	for(i=0;i<length;i++){
		if(a[i]==key){
			ret=i;
			break;
		}
	}
	
	return ret;
}