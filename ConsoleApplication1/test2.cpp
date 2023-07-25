//#include<stdio.h>//函数的递归调用
//int main()
//{
//	int age(int n);
//	printf("%d", age(5));
//	return 0;
//}
//int age(int n)
//{
//	int c;
//	if (n == 1)
//		c = 10;
//	else
//		c = age(n - 1) + 2;
//	return c;
//}


//#include<stdio.h>
//int main()
//{
//	int a(int n);
//	int n;
//	scanf_s("%d", &n);
//	printf("%d", a(n));
//	return 0;
//}
//int a(int n)
//{
//	int b;
//	if (n < 0)
//		printf("n<0,data error");
//	else if(n == 0 || n == 1)
//		b = 1;
//	else
//		b = n*a(n-1);
//	return b;
//}

//#include<stdio.h>   //数组作为函数参数（数组元素做函数实参）
//int main()
//{
//	int max(int x, int y);
//	int a[10],m,n,i;
//	printf("请输入十个数：");
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d",&a[i]);
//	}
//	for (i = 0,m=a[0],n=0; i < 10; i++)
//	{
//		if (max(m, a[i]) > m)
//		{
//			m = max(m, a[i]);
//			n = i;
//		}
//		
//	}
//	printf("最大值为%d.是第%d位数字",m, n+1);
//}
//int max(int x, int y)
//{
//	return(x > y ? x : y);
//}

//#include<stdio.h>//指针
//void f(int *p);
//void g(int k);
//int main(void)
//{
//	int i = 6;
//	printf("&i=%p\n", &i);
//	f(&i);
//	g(i);
//	return 0;
//}
//void f(int *p)
//{
//	printf("p=%p\n", p);
//}
//void g(int k)
//{
//	printf("k=%d\n", k);
//}


//#include<stdio.h>
//int main()
//{
//	int a=100, b=10;
//	int *x, *y;
//	x = &a;
//	y = &b;
//	printf("%d %d\n",a, b);
//	printf("%d %d\n",*x,*y);
//
//	return 0;
//}


//#include<stdio.h> //指针比大小
//int main()
//{
//	int* x, * y, * z, a, b;
//	printf("请输入两个值:\n");
//	scanf_s("%d %d",&a, &b);
//	x = &a;
//	y = &b;
//	if (a < b)
//	{
//		z = x; x = y; y = z;
//	}
//		printf("max:%d min:%d", *x, *y);
//	return 0;
//}

//#include<stdio.h> //指针比大小但作为函数参数
//int main()
//{
//	void swap(int*x, int*y);
//	int *p1,*p2,a, b;
//	printf("请输入两个值:\n");
//	scanf_s("%d %d",&a, &b);
//	p1 = &a;
//	p2 = &b;
//	if (a < b)
//	{
//		 swap(p1,p2);
//	}
//		printf("max:%d min:%d", *p1, *p2);
//	return 0;
//}
//void swap(int *x, int *y)
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}


//#include<stdio.h>//指针与数组
//int main()
//{
//	int a[10];
//	int i;
//	int* p;
//	//for (p = &a[0]; p < (a + 10); p++)
//	//{
//	//	scanf_s("%d", p);
//	for (i = 0; i < 10; i++) 
//	{
//		scanf_s("%d",&a[i]);
//	}
//	for (p= &a[0]; p < (a+10); p++) 
//	{
//		printf("%d", *p);
//	}
//	return 0;
//}


