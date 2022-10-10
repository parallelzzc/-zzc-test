#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	//定义，初始化
	int count=0;
	srand(time(0));
	int number=rand()%100;
	int a;
	
	//输入
	printf("I have guessed a number between 1 to 99\n");
	
	//判断，循环
	do{
		printf("enter:");
		scanf("%d",&a);
	if(a>number){
		count++;
		printf(">\n");
	}else if(a<number){
		count++;
		printf("<\n");
	}
    }while(a!=number);

printf("You win! count times:%d\n",count);
	
	return 0;
}