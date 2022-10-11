#include <stdio.h>

int main()

{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b==c){
			printf("等边三角形");
		}else if(a==b||a==c||b==c){
			printf("等腰三角形");
		}else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
			printf("直角三角形");
		}else{
			printf("普通三角形");
		}
	}else{
		printf("不构成三角形");
	}

    return 0;

}