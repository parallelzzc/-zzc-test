#include<stdio.h>

int main()
{
	int x,d,i;
	int a[8];
	
	scanf("%d",&x);
	int n=x;
	int w=0;
	
	while(n>0){
		d=n%10;
		a[w]=d;
		w++;
		n/=10;
	}

	int count=0;
	for(i=0;i<w;i++){
		if(a[i]==a[w-i-1]){
			count++;
		}else{
			count=0;
		}
	}
	
	if(count==w)
	printf("yes");
	else
	printf("no");
	
	return 0;
}