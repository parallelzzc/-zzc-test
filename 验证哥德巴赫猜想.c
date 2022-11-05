/*验证哥德巴赫猜想：任意大于6的偶数可以表示为两个素数之和。

要求输入格式：122

要求输出格式：

122=13+109

122=19+103

122=43+79

122=61+61
注意：不考虑用户输错数据的情况

提示：先在[2,x/2]区间找到第一个素数i，然后如果x-i也是素数则按格式打印该素数，采用循环嵌套打印所有符合条件的等式即可。
*/

#include<stdio.h>

int sushu(int i);
int main()
{
	int x,i;
	
	scanf("%d",&x);
	
	for(i=2;i<=x/2;i++){
		if(sushu(i)==1){
			if(sushu(x-i)==1)
			printf("%d=%d+%d\n",x,i,x-i);
		}
	}
	
	return 0;

}
int sushu(int i)
{
	int j;
	for(j=2;j<i;j++){
		if(i%j==0)
		return 0;
	}
	return 1;
}