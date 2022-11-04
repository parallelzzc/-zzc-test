//从小到大排序
//例：arr[10]={1,3,4,2,8,7,9,5,6,0}
#include<stdio.h>

int main(void)
{
	int a[10];
	int i;
	
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int temp,j,k;
	
	for(i=0;i<9;i++){
		for(j=0;j<10-i-1;j++){
			if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
	
	for(k=0;k<10;k++){
		printf("%-3d",a[k]);
	}
	
	return 0;
}