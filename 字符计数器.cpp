#include<stdio.h>
int main() {
	int a=0,b=0,c=0,d=0;
	char e;
	do {
		e=getchar();
		if((e>='a'&&e<='z')||(e>='A'&&e<='Z')) {
			a=a+1;
		} else if(e==' ') {
			b=b+1;
		} else if(e>='0'&&e<='9') {
			c=c+1;
		} else {
			d=d+1;
		}

	} while(e!='\n');
	printf("%d���ո�\n%d����ĸ\n%d������\n%d�������ַ�",b,a,c,d);

	return 0;
}
