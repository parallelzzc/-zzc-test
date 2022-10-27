/*从键盘输入一个整数x，判断它是否为升序完全平方数。升序数是指从高位到底位是升序，完全 平方数是指这个整数是另一个整数的平方。如4，25，289（＝17*17）都是升序完全平方数。225（＝15*15）不是升序数（2，2，5不是升序），所以225不是升序完全平方数。如果x不是升序完全平方数，打印"no"，否则打印"yes"。
【输入形式】输入一个正整数x。
【输出形式】如果x不是升序完全平方数，打印"no"，否则打印"yes"。
【样例输入1】16
【样例输出1】yes
【样例输入2】13
【样例输出2】no

判断完全平方数方法说明：由于平台不允许将double类型存入int类型变量，也不允许将double类型强制转换为int类型，因此判断是否是完全平方的方法可以参照如下：
定一个double类型的变量z,

令z=sqrt(x);//x是原先输入的那个值

如果满足floor(z)*floor(z)==x的话x就是完全平方数，floor是下取整函数，即将z的小数部分去掉*/


#include<stdio.h> 
#include<math.h>

int main()
{
	int x;
	int d;
	int j=10;
	double z;
	
	scanf("%d",&x);
	
	 z=sqrt(x);
	 
	 if(floor(z)*floor(z)==x){
	 while(x>0){
	 	d=x%10;
	 	x/=10;
	 	if(d>=j){
	 		goto out;
		 }
	 	j=d;
	 }
	 printf("yes");
}else{
	out: printf("no");
}
	 
	 
	 return 0;
} 