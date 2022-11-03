#include<stdio.h>

int main()
{
	int k,i,j;
	double tmp;
	double a[5];
	
	for(i=0;i<5;i++){
		scanf("%lf",&a[i]);
	}
	
	for(i=0;i<4;i++){
		k=i;
		for(j=i+1;j<5;j++){
			if(a[j]<a[k])
			k=j;
		}
		if(k!=i){
			tmp=a[i];
			a[i]=a[k];
			a[k]=tmp;
		}
	}
	
	for(i=0;i<5;i++){
		printf("%5.1f",a[i]);
	}
	
	return 0;
}