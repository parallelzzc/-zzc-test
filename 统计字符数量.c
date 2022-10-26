
/*编程实现从键盘输入一行字符，统计出其中空格的数量和数字的数量。

输入样例1：a b c12d21

输出样例1：2,4

输入样例2：a b c

输出样例2：2,0*/


#include <stdio.h>

int main()
{
    char ch;
    int i=0;int j=0;
    while((ch=getchar())!='\n'){
        if(ch>='0'&&ch<='9'){
            i++;
        }else if(ch==' '){
            j++;
        }
    }
    printf("%d,%d",j,i);

    return 0;
}