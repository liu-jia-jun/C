#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	int i=0,j=0,k,n;
	char name[20],found[20],copyn[20]= {'\0'},copyf[20];
	printf("��������Ҫ��ѯ���ַ���\n");
	gets(name);
	printf("��������Ҫ��ѯ�����ַ���\n");
	gets(found);
	n=strlen(found);
	k=strlen(name);
	printf("�ַ����ĳ��ȣ�%d\n���ַ����ĳ��ȣ�%d\n",k,n);
	for(i=0; i<k+1-n; i++) {
		strncpy(copyn,name+i,n);
		
		
		if(strcmp(copyn,found)==0) {
			j++;
		}
	}
	printf("�ַ����г��ֵ��Ӵ��ĸ�����%d\n",j);
	return 0;
}
