/*
//(*)号钻石输出
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("输入n值来确定*号钻石的大小\n");
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
// 函数调用
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
	printf("刘佳俊\n");
}
//函数调用  计算俩数之和
#include<stdio.h>
int main ()
{
	float add(float x,float y);
	float a,b,c;
	printf("请输入俩个要计算和的浮点数");
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

//pow函数 指数函数
#include<stdio.h>
int main ()
{
	int power(int ,int );
	int a,b,c;
	printf("请输入俩个数a b	 为a的b次方\n");
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

//计算俩个指数之和的阶乘
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
//实现次方运算
int power(int x,int y) {
	int i,z=1;
	for(i=1; i<=y; i++) {
		z=x*z;
	}
	return z;
}
//实现阶乘运算
int factorial(int x ) {
	int i,z=1;
	for(i=1; i<=x; i++) {
		z=z*i;
	}
	return z;
}



//题目 1：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
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

//冒泡排序
#include <stdio.h>
int main()
{
	float a[10],t;
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个浮点数\n",i+1);
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
//选择排序
#include<stdio.h>
int main()
{
	int n;
	printf("请输入你要比较的数的个数");
	scanf("%d",&n);

    int a[n],i,j,t,min,minpos;
    for(i=0; i<n; i++)
    {
    	printf("请输入第%d个数",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        min=a[i];
        minpos=i;//minpos需要更换，每比完一次minpos就得加一
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



 //2  456  8输出
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


//【程序2】
//题目：企业发放的奖金根据利润提成。
//利润(I)低于或等于10万元时，奖金可提10%；利润高于10万元，低于20万元时，
//低于10万元的部分按10%提成，高于10万元的部分，可可提成7.5%；20万到40万之间时，
//高于20万元的部分，可提成5%；40万到60万之间时高于40万元的部分，可提成3%；
//60万到100万之间时，高于60万元的部分，可提成1.5%，高于100万元时，
//超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？
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

 //【程序3】
//题目：一个整数，它加上100后是一个完全平方数，
//再加上168又是一个完全平方数，请问该数是多少？
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

  //【程序4】
//题目：输入某年某月某日判断这一天是这一年的第几天？
//1.程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，
//特殊情况，闰年且输入月份大于3时需考虑多加一天。
#include<stdio.h>
int main()
{
	int year,month,day,sum=0,a,b,c,i;
	printf("请输入年月日，以空格隔开");
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


// 【程序5】
//题目：输入三个整数x,y,z，请把这三个数由小到大输出。

#include<stdio.h>
int main()
{
	int x,y,z,t;
	printf("请输入三个数xyz\n");
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

// 【程序6】
//题目：用*号输出字母C的图案。
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


//【程序7】
//题目：输出特殊图案，请在c环境中运行，看一看，Very Beautiful!
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

 //【程序8】
//题目：输出9*9口诀。
//1.程序分析：分行与列考虑，共9行9列，i控制行，j控制列
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


//【程序9】
//题目：要求输出国际象棋棋盘。
//1.程序分析：用i控制行，j来控制列，根据i+j的和的变化来控制输出黑方格，还是白方格。
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
					printf("白");
				}
				else
				{
					printf("黑");
				}
			}
			else
			{
					if((j%2)==0)
				{
				 	printf("黑");
				}
				else
				{
					printf("白");
				}
			}
		}
		printf("\n");
	}
	return 0;
}

//【程序10】
//题目：打印楼梯，同时在楼梯上方打印两个笑脸。
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




//【程序11】
//题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，
//小兔子长到第三个月后每个月又生一对兔子，
//假如兔子都不死，问每个月的兔子总数为多少？
#include<stdio.h>
int main ()
{
	int a,b,c,month;
	printf("第一个月的兔子是1对\n");
	for(a=0,b=1,month=2;month<=30;month++)
	{
		c=a+b;
		printf("第%d个月的兔子是%d对\n",month,c);
		a=b;
		b=c;
	}
	return 0;
}


//【程序12】
//题目：判断101-200之间有多少个素数，并输出所有素数。
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

//【程序13】
//题目：打印出所有的“水仙花数”，所谓“水仙花数”
//是指一个三位数，其各位数字立方和等于该数本身。例如：153是一个“水仙花数”，
//因为153=1的三次方＋5的三次方＋3的三次方。
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

//数组输出与互换
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



//界面登录
#include<stdio.h>
#include<string.h>
int main()
{
	char username[100],passward[100];
	printf("请输入用户名\n");
	for(;;)
	{
		scanf("%s",username);
		if(strcmp(username,"b190108")==0)
		{
			break;
		}
		else
		{
			printf("输入有误，请重新输入\n");
		}
	}
		printf("请输入密码\n");
		for(;;)
		{
			scanf("%s",passward);
			if(strcmp(passward,"123")==0)
			{
				printf("登陆成功");
				break;
			}
			else
			{
					printf("输入有误，请重新输入\n");
			}
		}
	return 0;
}
//【程序14】
//题目：将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
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

//【程序15】
//题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，
//60-89分之间的用B表示，60分以下的用C表示。
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
//【程序16】
//题目：输入两个正整数m和n，求其最大公约数和最小公倍数
//辗转相除法
#include<stdio.h>
int main() {
	int m,n,t,p;
	scanf("%d%d",&m,&n);
	p=m*n;
	if(m>n) {//实现两个数的从小到大排序
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
			printf("最大公约数%d",m);
		}
	} while(t!=0);
	n=p/m;
	printf("最小公倍数%d",n);
	return 0;
}

//【程序17】
//题目：输入一行字符，分别统计出其中英文字母、
//空格、数字和其它字符的个数。
// 字符计数器   数字有误
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


//【程序18】
//题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
//例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
//计算Sn=a+a*a+a*a*a+....+a*aaaaaaa...
#include<stdio.h>
int main ()
{
	int power(int x,int y);
	int i,n,s=0,a;
	printf("输入俩个数Sn=a+a*a+a*a*a+....+a*aaaaaaa...\n");
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




//函数调用求一个数组中的最大
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

//递归法  算阶乘
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


//折半法查询数
#include<stdio.h>
int main() {
	int a[]= {1,2,3,4,5,6,7,8,9,10},low=0,mid,high=9,n;
	printf("请输入你要查询的数\n");
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

//杨辉三角
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
//指针输出
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

//递归汉诺塔
#include<stdio.h>
int main()
{
	int hannuota(int ,char ,char ,char );
	int n;
	printf("输入一个数\n");
	scanf("%d",&n);
	printf("步骤\n");
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
 //通过调用函数和指针的用法来实现来俩个数字的大小输出。
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


//定义一个函数sort，使用指针实现将三个整数，从大到小排序
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

//【程序19】
//题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。
//例如6=1＋2＋3.编程找出1000以内的所有完数。
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
			printf("%d的因子是\n",i);
			for(j=0; j<=n; j++) {
				printf("%d",a[j]);
				printf("\n");
			}
		}
	}
	return 0;
}

//【程序20】
//题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，
//求它在第10次落地时，共经过多少米？第10次反弹多高？
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
	printf("经历了%f米,第十次反弹高度为%f米",sum,high);
	return 0;
}

//【程序21】
//题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，
//还不瘾，又多吃了一个第二天早上又将剩下的桃子吃掉一半，
//又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，
//见只剩下一个桃子了。求第一天共摘了多少。
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

//汉诺塔
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

 //全局变量：对于不同的函数都能调用，分配储存单元在程序结束时才会释放，
 //区别于局部变量。
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

 //三个数，指针排序，多个相同的程序可用循环或另起一个函数来实现该功能
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

 //多种方法实现数组元素的输出
#include<stdio.h>
int a[10]={1,2,3,4,5,6,7,8,9,0};//全局变量
int main()
{
	int i;
	int *p;
		for(i=0;i<10;i++)
	{
		printf("%d",a[i]);//下标法输出
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d",*(a+i));//数组名输出；数组名时数组中第一个元素的地址
	}
	printf("\n");
	for(p=a;p<(a+10);p++)
	{
		printf("%d",*p);//指针法输出
	}
	return 0;
 }


 //指针数组的输入查找删除输出   有误**********
#include<stdio.h>
void enter_string(char str[80])
{
	gets(str);//向字符组输入字符串
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
	extern void print_string(char str[]);//声明三个函数
	char c;
	char str[80];
	enter_string(str);
	scanf("%c",c);
	delete_string(str,c);
	print_string(str);
	return 0;
}
//数组元素互换   有误**********
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

//strcat函数的使用
#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="i love",b[]="you";
	strcat(a,b);// strcat函数，将字符b复制黏贴到a字符的后面使得a成为新的字符
	printf("%s",a);
	return 0;
}
//图片文件合成 与本机系统不兼容
#include<stdio.h>
#include<stdlib.h>
int main() {
	FILE *f_pic,*f_file,*f_finish;
	char ch,pic_name[20],file_name[20],finish_name[20];
	printf("请输入需要合成的图片和文件名称：\n");
	printf("图片:");
	scanf("%s",pic_name);
	printf("文件:");
	scanf("%s",file_name);
	printf("生成为：");
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
