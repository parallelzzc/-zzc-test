/*如果b=0，计算结束，a就是最大公约数；
否则，计算a除以b的余数，让a=b，而b等于那个余数；
回到第一步
*/

#include<stdio.h>

int main()
{
	int a;
	int b;
	int t;
	
	printf("enter:");
	scanf("%d %d",&a,&b);
	
	//xunhuan
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	
	//shuchu
	printf("ret is %d",a);
	
	return 0;
}