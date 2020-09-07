#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	int i=0,j=0,k,n;
	char name[20],found[20],copyn[20]= {'\0'},copyf[20];
	printf("请输入你要查询的字符串\n");
	gets(name);
	printf("请输入你要查询的子字符串\n");
	gets(found);
	n=strlen(found);
	k=strlen(name);
	printf("字符串的长度：%d\n子字符串的长度：%d\n",k,n);
	for(i=0; i<k+1-n; i++) {
		strncpy(copyn,name+i,n);
		
		
		if(strcmp(copyn,found)==0) {
			j++;
		}
	}
	printf("字符串中出现的子串的个数：%d\n",j);
	return 0;
}
