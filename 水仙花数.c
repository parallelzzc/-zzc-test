//水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。例如：153 = 13 + 53+ 33。本题要求编写程序,计算所有N位水仙花数。
//
//输入格式：
//
//输入在一行中给出一个正整数N（3<=N<=7）。
//
//输出格式：
//
//按递增顺序输出所有N位水仙花数，每个数字占一行。
//
//输入样例：
//3
//输出样例：
//153
//370
//371
//407

#include<stdio.h>

int main()
{
	int n,m,i,k,d,j;
	scanf("%d",&n);
	
	int min=1;
	m=n;
	while(m>1){
		min*=10;
		m--;
	}
	k=min;
	for(i=k;i<k*10;i++){
	int sum=0;
	j=i;
	while(i>0){
		d=i%10;
		int count=1;
		int fact=1;
		while(count<=n){
			fact*=d;
			count++;
		}
		sum+=fact;
		i/=10;
	}
	if(sum==j){
	   printf("%d\n",sum);
	}
	i=j;
}
	return 0;
	
}