#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c;
	
	scanf("%f,%f,%f",&a,&b,&c);
	float p;
	float area;
	
	p=(a+b+c)/2.0;
	area=sqrt(p*(p-a)*(p-b)*(p-c));
	

	
	if(a+b>c && a+c>b && b+c>a){
	printf("%f",area);	
	}else{
		printf("error!");
	}
	
	return 0;
}