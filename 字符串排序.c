#include<stdio.h>
#include<string.h>

int main(void){
	char str[10][20];
	char tmp[20];
	int i,j,k,n;
	
	for(i=0;i<10;i++){
		scanf("%s",str[i]);
		if(strcmp(str[i],"0")==0){
			break;//若输入0，则直接break，不会进行i++
		}
	}
	n=i;
	for(j=0;j<n-1;j++){
		for(k=0;k<n-j-1;k++){
			if(strcmp(str[k],str[k+1])==1){
				strcpy(tmp,str[k]);//切忌不可以tmp=s[k],也不可以strcpy(tmp[20],s[k]),因为tmp是数组，不可以整体赋值
				strcpy(str[k],str[k+1]);
				strcpy(str[k+1],tmp);
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%s\n",str[i]);
	}
	
	return 0;
}