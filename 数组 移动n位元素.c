#include<stdio.h>

int main()
{
	int a[5];
	int n,i,j;
	int temp;
	
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	
	
	while(n>5){
		n=n-5;
	}
	
	
	for(j=0;j<n;j++){
		temp=a[4];
	for(i=3;i>=0;i--){
		a[i+1]=a[i];
	}
	a[0]=temp;
}
	
	for(i=0;i<5;i++){
		if(i!=4)
		printf("%d ",a[i]);
		else
		printf("%d",a[i]);
	}
	
	return 0;
}
