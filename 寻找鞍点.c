#include<stdio.h>

int main(void)
{
	int a[4][4];
	int i,j,k;
	int count=0;
	int max,max_j,flag;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<4;i++){
	max=a[i][0];
	max_j=0;
		for(j=1;j<4;j++){
			if(max<a[i][j]){
				max=a[i][j];
				max_j=j;
			}
		}
		flag=1;
		for(k=0;k<4;k++){
			if(max>a[k][max_j]){
				flag=0;
				continue;
			}
		}
		if(flag==1){
			printf("%d,%d\n",i,max_j);
			count++;
	}
}
		if(flag==0&&count==0){
			printf("no");
		}
	
	return 0;
}