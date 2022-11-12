#include<stdio.h>

int main(void)
{
	char s1[80],s2[80];
	int i=0;
	
	scanf("%s",s1);
	scanf("%s",s2);
	
	while(s1[i]!='\0'){
		i++;
	}
	int j=0;
	while(s2[j]!='\0'){
		s1[i]=s2[j];
		i++;
		j++;
	}
	s1[i]=s2[j];
	
	printf("%s",s1);
	
	return 0;
}