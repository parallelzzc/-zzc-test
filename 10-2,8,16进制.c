#include<stdio.h>

int main()
{
	int n,i,d,k,h,j;
	int a[8];
	
	scanf("%d",&n);
	d=n;
	k=n;
	h=n;
	
	for(i=0;i<8;i++){
		a[i]=d%2;
		d/=2;
	}
	for(i=7;i>=0;i--){
		printf("%d",a[i]);
	}
	
	
	char b[8];
	for(j=0;j<8;j++){
		b[j]=' ';
	}
	int m;
	int t=0;
	char c[8]={0,1,2,3,4,5,6,7};
	while(k>0){
		m=k%8;
		b[t]=c[m];
		k/=8;
		t++;
	}
	for(i=7;i>=0;i--){
		if(b[i]+'0'>='0'&&b[i]+'0'<='9'){
			printf("%o",b[i]);
		}else
		printf("%c",b[i]);
	}
	
	
	char s[8];
	for(j=0;j<8;j++){
		s[j]=' ';
	}
	char e[16]={0,1,2,3,4,5,6,7,8,9,'A','B','C','D','E','F'};
	int q;
	int count=0;
	while(h>0){
		q=h%16;
		s[count]=e[q];
		h/=16;
		count++;
	}
	for(i=7;i>=0;i--){
		if(s[i]+'0'>='0'&&s[i]+'0'<='9'){
			printf("%x",s[i]);
		}else
		printf("%c",s[i]);
	}
	
	return 0;
}