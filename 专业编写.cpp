/*
//(*)����ʯ���
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("����nֵ��ȷ��*����ʯ�Ĵ�С\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*n-2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
// ��������
#include<stdio.h>
int main () {
	int a();
	int b();
	a();
	b();
	a();
	return 0;
}
int a() {
	printf("************************\n");
}
int b() {
	printf("���ѿ�\n");
}
//��������  ��������֮��
#include<stdio.h>
int main ()
{
	float add(float x,float y);
	float a,b,c;
	printf("����������Ҫ����͵ĸ�����");
	scanf("%f%f",&a,&b);
	c=add(a,b);
	printf("sum is %f\n",c);
	return 0;
}
float add(float x,float y)
{
	float z;
	z=x+y;
	return z;
}

//pow���� ָ������
#include<stdio.h>
int main ()
{
	int power(int ,int );
	int a,b,c;
	printf("������������a b	 Ϊa��b�η�\n");
	scanf("%d%d",&a,&b);
	c=power(a,b);
	printf("%d",c);
	return 0;
 }
 int power(int x,int y)
 {
 	int i,z=1;
 	for(i=1;i<=y;i++)
 	{
 		z=x*z;
	 }
	 return z;
 }

//��������ָ��֮�͵Ľ׳�
#include<stdio.h>
int main() {
	int power(int x,int y);
	int factorial(int x);
	int a,b,c,d,e;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=factorial(power(a,b)+power(c,d));
	printf("%d",e);
	return 0;
}
//ʵ�ִη�����
int power(int x,int y) {
	int i,z=1;
	for(i=1; i<=y; i++) {
		z=x*z;
	}
	return z;
}
//ʵ�ֽ׳�����
int factorial(int x ) {
	int i,z=1;
	for(i=1; i<=x; i++) {
		z=z*i;
	}
	return z;
}



//��Ŀ 1����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
#include<stdio.h>
int main()
{
	int a[4]={1,2,3,4},b=1,c=1,i,j,n,sum;
	for(i=0;i<4;i++)
	{

		for(j=0;(j<4&&j!=i);j++)
		{

			for(n=0;(n<4&&n!=i&&n!=j);n++)
			{
				c=a[j]*10;
				b=a[i]*100;
				sum=b+c+a[n];
				printf("%d,",sum);
			}
		}

	}
	return 0;
}

//ð������
#include <stdio.h>
int main()
{
	float a[10],t;
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("�������%d��������\n",i+1);
		scanf("%f",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%3.1f>",a[i]);
	}
	return 0;
}
//ѡ������
#include<stdio.h>
int main()
{
	int n;
	printf("��������Ҫ�Ƚϵ����ĸ���");
	scanf("%d",&n);

    int a[n],i,j,t,min,minpos;
    for(i=0; i<n; i++)
    {
    	printf("�������%d����",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        min=a[i];
        minpos=i;//minpos��Ҫ������ÿ����һ��minpos�͵ü�һ
        for(j=i+1; j<n; j++)
        {
            if(min>a[j])
            {
                min=a[j];
                minpos=j;
            }
        }
        t=a[i];
        a[i]=min;
        a[minpos]=t;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}



 //2  456  8���
 #include<stdio.h>
 int main()
 {
 	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<3;j++)
 		{
 			if(i==1||j==1)
 			{
 				printf("%2d",a[i][j]);
			 }
			 else
			 {
			 	printf("  ");
			 }

		 }
		 printf("\n");
	 }
	 return 0;
  }


//������2��
//��Ŀ����ҵ���ŵĽ������������ɡ�
//����(I)���ڻ����10��Ԫʱ���������10%���������10��Ԫ������20��Ԫʱ��
//����10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣��ɿ����7.5%��20��40��֮��ʱ��
//����20��Ԫ�Ĳ��֣������5%��40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
//60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%������100��Ԫʱ��
//����100��Ԫ�Ĳ��ְ�1%��ɣ��Ӽ������뵱������I����Ӧ���Ž���������
#include<stdio.h>
int main ()
{
	float money,income;
	int a;
	scanf("%f",&money);
	a=money/100000;
	if(a==0)
	{
		income=money*0.1;
	}
	else if(a==1)
	{
		income=(money-100000)*0.075+10000;
	}
	else if(a==2||a==3)
	{
		income=(money-200000)*0.05+10000+7500;
	}
	else if(a==4||a==5)
	{
		income=(money-400000)*0.03+20000+7500;
	}
	else if(a==6||a==7||a==8||a==9)
	{
		income=(money-600000)*0.015+20000+7500+6000;
	}
	else
	{
		income=(money-1000000)*0.01+20000+7500+12000;
	}
	printf("%.2f",income);
	return 0;
 }

 //������3��
//��Ŀ��һ��������������100����һ����ȫƽ������
//�ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
 	int i,j,k,a;
 	for(i=1;;i++)
 	{
 		for(j=1;j<i+100;j++)
 		{
 			a=j*j;
 			if((i+100)==a)
 			{
 				for(j=1;j<i+268;j++)
 				{
 					a=j*j;
 					if((i+268)==a)
 					{
 						printf("%d\n",i);

					 }
				 }
			 }
		 }
	 }
 	return 0;
  }

  //������4��
//��Ŀ������ĳ��ĳ��ĳ���ж���һ������һ��ĵڼ��죿
//1.�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬
//��������������������·ݴ���3ʱ�迼�Ƕ��һ�졣
#include<stdio.h>
int main()
{
	int year,month,day,sum=0,a,b,c,i;
	printf("�����������գ��Կո����");
	scanf("%d%d%d",&year,&month,&day);

	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==8||i==7||i==10||i==12)
		{
			sum=sum+31;
		}
		else
		{
			sum=sum+30;
		}
	}
	if(month>=2)
	{
		a=year%4;
		b=year%100;
		c=year%400;
		if(a==0&&b!=0||c==0)
		{
			sum=sum-1;
		}
		else
		{
			sum=sum-2;
		}

	}
	printf("%d",sum+day);
	return 0;
 }


// ������5��
//��Ŀ��������������x,y,z���������������С���������

#include<stdio.h>
int main()
{
	int x,y,z,t;
	printf("������������xyz\n");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y&&x>z)
	{
	if(y>z)	printf("%d %d %d",z,y,x);
	else printf("%d %d %d",z,y,x);
	}
	if(y>x&&y>z)
	{
		if(x>z) printf("%d %d %d",z,x,y);
		else printf("%d %d %d",x,z,y);
	 }
	 if(z>y&&z>x)
	 {
	 	if(x>y) printf("%d %d %d",y,x,z);
	 	else printf("%d %d %d",x,y,z);
	 }
	return 0;
 }

// ������6��
//��Ŀ����*�������ĸC��ͼ����
#include<stdio.h>
int main()
{
	 printf("Hello C-world!\n");
  printf(" ****\n");
  printf(" *\n");
  printf(" * \n");
  printf(" ****\n");


	 return 0;
}


//������7��
//��Ŀ���������ͼ��������c���������У���һ����Very Beautiful!
#include<stdio.h>
int main()
{
	char a[15];
	int i;
	for(i=0;i<15;i++)
	{
		a[i]=getchar();
	}
	for(i=0;i<15;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
 }

 //������8��
//��Ŀ�����9*9�ھ���
//1.����������������п��ǣ���9��9�У�i�����У�j������
#include<stdio.h>
int main()
{
	int product,i,j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		{
			product=j*i;
			printf("%d*%d=%-2d	",i,j,product);
		}
		printf("\n");
	}
	return 0;
}


//������9��
//��Ŀ��Ҫ����������������̡�
//1.�����������i�����У�j�������У�����i+j�ĺ͵ı仯����������ڷ��񣬻��ǰ׷���
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			if((i%2)==0)
			{
				if((j%2)==0)
				{
					printf("��");
				}
				else
				{
					printf("��");
				}
			}
			else
			{
					if((j%2)==0)
				{
				 	printf("��");
				}
				else
				{
					printf("��");
				}
			}
		}
		printf("\n");
	}
	return 0;
}

//������10��
//��Ŀ����ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц����
#include<stdio.h>
int main()
{
	int i,j;
	printf("\1\1\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
 }




//������11��
//��Ŀ���ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
//С���ӳ����������º�ÿ��������һ�����ӣ�
//�������Ӷ���������ÿ���µ���������Ϊ���٣�
#include<stdio.h>
int main ()
{
	int a,b,c,month;
	printf("��һ���µ�������1��\n");
	for(a=0,b=1,month=2;month<=30;month++)
	{
		c=a+b;
		printf("��%d���µ�������%d��\n",month,c);
		a=b;
		b=c;
	}
	return 0;
}


//������12��
//��Ŀ���ж�101-200֮���ж��ٸ����������������������
#include<stdio.h>
int main()
{
	int i,j;
	for(i=101;i<=200;i++)
	{
		for(j=2;j<i;j++)
		{
			if((i%j)!=0)
			{
				if(j==(i-1))
				{
					printf("%d  ",i);
				}
			}
			else
			{
				break;
			}

		}

	}
	return 0;
 }

//������13��
//��Ŀ����ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�����
//��ָһ����λ�������λ���������͵��ڸ����������磺153��һ����ˮ�ɻ�������
//��Ϊ153=1�����η���5�����η���3�����η���
#include<stdio.h>
int main()
{
	int i,a,b,c;
	for(i=100;i<1000;i++)
	{
		a=i/100;
		b=i%10;
		c=(i/10)%10;
		if(i==(a*a*a+b*b*b+c*c*c))
		{
			printf("%d  ",i);
		}
	}
	return 0;
}

//��������뻥��
#include<stdio.h>
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j,b[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[j][i]=a[i][j];
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("*****************\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
 }



//�����¼
#include<stdio.h>
#include<string.h>
int main()
{
	char username[100],passward[100];
	printf("�������û���\n");
	for(;;)
	{
		scanf("%s",username);
		if(strcmp(username,"b190108")==0)
		{
			break;
		}
		else
		{
			printf("������������������\n");
		}
	}
		printf("����������\n");
		for(;;)
		{
			scanf("%s",passward);
			if(strcmp(passward,"123")==0)
			{
				printf("��½�ɹ�");
				break;
			}
			else
			{
					printf("������������������\n");
			}
		}
	return 0;
}
//������14��
//��Ŀ����һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,a;
	scanf("%d",&n);
	printf("%d=",n);
	for(i=2;i<=n;)
	{
		a=n%i;
		if(a==0)
		{
			n=n/i;
			printf("%d*",i);
			i=2;
		}
		else
		{
			i=i+1;
		}
	}
	printf("%d",n);
	return 0;
}

//������15��
//��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��
//60-89��֮�����B��ʾ��60�����µ���C��ʾ��
#include<stdio.h>
int main()
{
	int grade;
	char a;
	scanf("%d",&grade);
	a=grade>=90?'a':(grade>=60?'b':'c');
	printf("%c",a);
	return 0;
}
//������16��
//��Ŀ����������������m��n���������Լ������С������
//շת�����
#include<stdio.h>
int main() {
	int m,n,t,p;
	scanf("%d%d",&m,&n);
	p=m*n;
	if(m>n) {//ʵ���������Ĵ�С��������
		t=m;
		m=n;
		n=t;
	}
	do {
		t=n%m;
		if(t!=0) {
			n=m;
			m=t;
		} else {
			printf("���Լ��%d",m);
		}
	} while(t!=0);
	n=p/m;
	printf("��С������%d",n);
	return 0;
}

//������17��
//��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ��
//�ո����ֺ������ַ��ĸ�����
// �ַ�������   ��������
#include<stdio.h>
int main () {
	char c;
	int number,i,blank=0,letter=0,others=-1;
	do {
		c=getchar();
		if(c==' ') {
			blank=blank+1;
		} else if((c<='z'&&c>='a')||(c>='A'&&c<='Z')) {
			letter=letter+1;
		} else if(c>='0'&&c<='9') {
			number++;
		} else {
			others=others+1;
		}
	} while(c!='\n');
	printf("blank=%d\nletter=%d\nothers=%d\nnumber=%d",blank,letter,others,number);

	return 0;
}


//������18��
//��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
//����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�
//����Sn=a+a*a+a*a*a+....+a*aaaaaaa...
#include<stdio.h>
int main ()
{
	int power(int x,int y);
	int i,n,s=0,a;
	printf("����������Sn=a+a*a+a*a*a+....+a*aaaaaaa...\n");
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
	{
		s=s+power(a,i);
	}
	printf("%d",s);
	return 0;
}
 int power(int x,int y) {
	int i,z=1;
	for(i=1; i<=y; i++) {
		z=x*z;
	}
	return z;
}




//����������һ�������е����
#include<stdio.h>
int main() {
	int max(int []);
	int x[10]= {1,2,3,4,56,7,89,25,8};
	printf("%d",max(x));
}
int max(int a[10]) {
	int i,t;
	t=a[0];
	for(i=1; i<10; i++) {
		if(t<a[i]) {
			t=a[i];
		}
	}
	return t;
}

//�ݹ鷨  ��׳�
#include<stdio.h>
int main()
{
	int n;
	int factorial(int);
	scanf("%d",&n);
	printf("%d",factorial(n));
	return 0;
 }
 int factorial(int n)
 {
 	if(n>1)
 	return n*factorial(n-1);
 	else
 	return 1;
 }


//�۰뷨��ѯ��
#include<stdio.h>
int main() {
	int a[]= {1,2,3,4,5,6,7,8,9,10},low=0,mid,high=9,n;
	printf("��������Ҫ��ѯ����\n");
	scanf("%d",&n);
	if(n!=a[low]&&n!=a[low]) {
		while(n!=a[mid]) {

			mid=(high+low)/2;
			if(n>a[mid]) {
				low=mid+1;
			} else if(n<a[mid]) {
				high=mid-1;
			}
		}
		printf("%d,%d",a[mid],mid+1);
	} else if(n=a[low]) {
		printf("%d%d",a[low],low+1);
	} else if(n=a[high]) {
		printf("%d%d",a[high],high+1);
	}
	return 0;
}

//�������
#include<stdio.h>
int main()
{
	int i,j,a[10][10];
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0||j==i)
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=a[i-1][j]+a[i-1][j-1];
			}
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%-3d  ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
 }
//ָ�����
#include<stdio.h>
int main() {
	int a=10,*p;
	printf("%d\n",a);
	p=&a;
	*p=20;
	printf("%d\n",a);
	printf("%d\n",p);
	printf("%d\n",&a);
	printf("%d\n",*p);
	printf("%d\n",*&*&p);
	return 0;
}

//�ݹ麺ŵ��
#include<stdio.h>
int main()
{
	int hannuota(int ,char ,char ,char );
	int n;
	printf("����һ����\n");
	scanf("%d",&n);
	printf("����\n");
	hannuota(n,'a','b','c');
	return 0;
 }

 void hannuota(int n,char one ,char two, char three)
 {
 	void move(char ,char );
 	if(n==1)
 	{
 		move(one,three);
	 }
	 else
	 {
	 	hannuota(n-1,one,three,two);
	 	move(one,three);
	 	hannuota(n-1,two,one,three);
	 }
 }
 void move(char x,char y)
 {
 	printf("%c-->%c\n",x,y);
 }
 //ͨ�����ú�����ָ����÷���ʵ�����������ֵĴ�С�����
#include<stdio.h>
int main() {
	double x,y;
	void exchange(double *,double *);
	x=10;
	y=1;
	exchange(&x,&y);
	printf("%lf,%lf",x,y);
	return 0;
}
void exchange(double *x,double *y)

{
	double t;
	if(*x>*y) {
		t=*x;
		*x=*y;
		*y=t;
	}
}


//����һ������sort��ʹ��ָ��ʵ�ֽ������������Ӵ�С����
#include<stdio.h>
int main ()
{
	int a=3,b=8,c=4;
	void sort(int *,int *,int *);
	sort(&a,&b,&c);
	return 0;
 }

void sort(int *a,int *b,int *c)
{
	void swap(int *,int *);
	if(*a>*b)
	{
	swap(a,b);
	}
	if(*a>*c)
	{
		swap(a,c);
	}
	if(*b>*c)
	{
	swap(b,c);
	}
	printf("%d	%d	%d",*a,*b,*c);
}
void swap(int *x,int *y)
{
	int t;

	if(*x>*y)
	{
	t=*x;
	*x=*y;
	*y=t;
	}
}

//������19��
//��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"��
//����6=1��2��3.����ҳ�1000���ڵ�����������
#include<stdio.h>
int main() {
	int i,sum=0,j,a[10],n=-1;
	for(i=1; i<=1000; i++) {
		sum=0;
		n=-1;
		for(j=1; j<i; j++) {
			if(i%j==0) {
				sum=sum+j;
				n++;
				a[n]=j;
			}
		}
		if(i==sum) {
			printf("%d��������\n",i);
			for(j=0; j<=n; j++) {
				printf("%d",a[j]);
				printf("\n");
			}
		}
	}
	return 0;
}

//������20��
//��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£�
//�����ڵ�10�����ʱ�������������ף���10�η�����ߣ�
#include<stdio.h>
int main ()
{
	int i;
	float sum=100,high=100;
	for(i=0;i<10;i++)
	{
		high=high/2;
		sum=sum+high*2;
	}
	printf("������%f��,��ʮ�η����߶�Ϊ%f��",sum,high);
	return 0;
}

//������21��
//��Ŀ�����ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬
//����񫣬�ֶ����һ���ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬
//�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ��������10���������ٳ�ʱ��
//��ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�
#include<stdio.h>
int main ()
{
	int sum=0,i,number=1;
	for(i=1;i<10;i++)
	{
		number=(number+1)*2;
	}
	printf("%d",number);
	return 0;
 }

//��ŵ��
#include<stdio.h>
int main ()
{
	int n;
	char a='A',b='B',c='C';
	void hannuota (int ,char ,char ,char );
	hannuota (3,a,b,c);
	return 0;
 }
 void hannuota(int n,char a,char b,char c)
 {
 	void move(char ,char );
 	if(n==1)
 	{
 		move(a,c);
	 }
	else
	{
		hannuota(n-1,a,c,b);
		move(a,c);
		hannuota(n-1,b,a,c);
	}
 }
 void move(char a,char b)
 {
 	printf("%c->%c",a,b);
 }

 //ȫ�ֱ��������ڲ�ͬ�ĺ������ܵ��ã����䴢�浥Ԫ�ڳ������ʱ�Ż��ͷţ�
 //�����ھֲ�������
#include<stdio.h>
int a[3]={2,4,8};
int main()
{
	int max(int []),min(int []),average(int []);
	printf("%d,%d,%d",max(a),min(a),average(a));
	return 0;
 }
 int max(int a[])
 {
 	int i,z=a[0];
 	for (i=1;i<3;i++)
 	{
 		if(z<a[i])
 		z=a[i];
	 }
	 return z;
 }
 int min (int a[])
 {
 	 	int i,z=a[0];
 	for (i=1;i<3;i++)
 	{
 		if(z>a[i])
 		z=a[i];
	 }
	 return z;
 }
 int average(int a[])
 {
 	int add=0,i;
 	for(i=0;i<3;i++)
 	{
 		add=add+a[i];
	 }
	 return (add/3);
 }

 //��������ָ�����򣬶����ͬ�ĳ������ѭ��������һ��������ʵ�ָù���
#include<stdio.h>
int main()
{
	int a=1,b=2,c=3;
	void sort(int *x,int *y,int *z);
	int *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	sort(p1,p2,p3);
	printf("%d,%d,%d",a,b,c);
	return 0;
 }
 void sort(int *x,int *y,int *z)
 {
 	void exchange(int *,int *);
 	if(*x<*y)
 	exchange(x,y);
 	if(*x<*z)
 	exchange(x,z);
 	if(*y<*z)
 	exchange(y,z);
 }
 void exchange(int *m,int *n)
 {
 	int temp;
 	temp=*m;
 	*m=*n;
 	*n=temp;
 }

 //���ַ���ʵ������Ԫ�ص����
#include<stdio.h>
int a[10]={1,2,3,4,5,6,7,8,9,0};//ȫ�ֱ���
int main()
{
	int i;
	int *p;
		for(i=0;i<10;i++)
	{
		printf("%d",a[i]);//�±귨���
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d",*(a+i));//�����������������ʱ�����е�һ��Ԫ�صĵ�ַ
	}
	printf("\n");
	for(p=a;p<(a+10);p++)
	{
		printf("%d",*p);//ָ�뷨���
	}
	return 0;
 }


 //ָ��������������ɾ�����   ����**********
#include<stdio.h>
void enter_string(char str[80])
{
	gets(str);//���ַ��������ַ���
}
void delete_string(char str[],char ch)
{
	int i,j;
	for(i=j=0;str[i]!='\0';i++)
	if(str[i]!=ch)
	{
		str[j++]=str[i];
	}
	str[j++]='\0';
 }
 void print_string(char str[])
 {
 	printf("%s\n",str);
 }
int main()
{
	extern void enter_string(char str[]);
	extern void delete_string(char str[],char ch);
	extern void print_string(char str[]);//������������
	char c;
	char str[80];
	enter_string(str);
	scanf("%c",c);
	delete_string(str,c);
	print_string(str);
	return 0;
}
//����Ԫ�ػ���   ����**********
#include<stdio.h>
int main()
{
	void exchange(int []);
	int a[10]={1,2,3,4,5,6,7,8,9,0},i;
	exchange(a);
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
 }

 void exchange(int a[])
 {
 	int i,temp;

 	for(i=0;i<4;i++)
 	{
 		temp=a[10-i];
 		a[10-i]=a[i];
 		a[i]=temp;
	 }
 }

//strcat������ʹ��
#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="i love",b[]="you";
	strcat(a,b);// strcat���������ַ�b���������a�ַ��ĺ���ʹ��a��Ϊ�µ��ַ�
	printf("%s",a);
	return 0;
}
//ͼƬ�ļ��ϳ� �뱾��ϵͳ������
#include<stdio.h>
#include<stdlib.h>
int main() {
	FILE *f_pic,*f_file,*f_finish;
	char ch,pic_name[20],file_name[20],finish_name[20];
	printf("��������Ҫ�ϳɵ�ͼƬ���ļ����ƣ�\n");
	printf("ͼƬ:");
	scanf("%s",pic_name);
	printf("�ļ�:");
	scanf("%s",file_name);
	printf("����Ϊ��");
	scanf("%s",finish_name);

	if(!(f_pic=fopen(pic_name,"rb"))) {
		printf("cannot open the picture %s !",pic_name);
		//return;
	}
	if(!(f_file=fopen(file_name,"rb"))) {
		printf("cannot open the file %s !",file_name);
		//return;
	}
	if(!(f_finish=fopen(finish_name,"wb"))) {
		printf("cannot open the file %s !",finish_name);
		//return;
	}

	while(!(feof(f_pic))) {
		ch=fgetc(f_pic);
		fputc(ch,f_finish);
	}
	fclose(f_pic);
	while(!(feof(f_file))) {
		ch=fgetc(f_file);
		fputc(ch,f_finish);
	}
	fclose(f_file);
	system("pause");
	return 0;
}
 */
#include<stdio.h> 
void change(int *);
int mani()
{
	int n;
	int *p=&n;
	change(p);
	printf("%d",n);
	return 0;
}
void change(int *p)
{
	int a=10;
	*p=a;
//	return p;
}
