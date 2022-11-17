#include<stdio.h>
#include<string.h>

void ten2other(int x,int jz);
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	ten2other(a,b);
	
	return 0;
}
void ten2other(int x,int jz)
{
	int tmp;
	if(jz==8){
		if(x==0)
		return;
		else{
			tmp=x%8;
			ten2other(x/8,8);
			printf("%o",tmp);
		}
	}
	if(jz==2){
		if(x==0)
		return;
		else{
			tmp=x%2;
			ten2other(x/2,2);
			printf("%d",tmp);
		}
	}
	if(jz==16){
		if(x==0)
		return;
		else{
			tmp=x%16;
			ten2other(x/16,16);
			if(tmp+'0'>='0'&&tmp+'0'<='9'){
			printf("%d",tmp);
		}else{
			printf("%c",tmp-10+'A');
		}
		}
	}
}