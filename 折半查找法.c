
//a[SIZE]必须是排好序的，从大到小或从小到大
//程序要求输出下标
#include<stdio.h>

int main(void)
{
	int i,n,a[9];
	
	for(i=0;i<9;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	
	int left,right;
	left=0;
	right=8;
	int mid=(left+right)/2;
	
	while(left<=right){
		if(n>a[mid]){
			left=mid+1;
		}else if(n<a[mid]){
			right=mid-1;
		}else 
		    break;
		    
		mid=(left+right)/2;
	}
	
	if(left<=right){
		printf("%d",mid);
	}else
		printf("no data");
		
		return 0;
}