#include<stdio.h>
#include<string.h>

int main(void)
{
	char s[10][15];
	int i,j,n,k;
	char tmp[15];
	
	for(i=0;i<10;i++){
		gets(s[i]);
		if(strcmp(s[i],"0")==0){
			break;
		}
	}
	n=i;
	for(j=0;j<n;j++){
		for(k=0;k<n-j-1;k++){
			if(strcmp(s[k],s[k+1])==1){
				strcpy(tmp,s[k]);
				strcpy(s[k],s[k+1]);
				strcpy(s[k+1],tmp);
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%-15s",s[i]);
	}
		return 0;
}