     //题目1	
#include<stdio.h>														//在c++里面长度为9但在stdio里面长度为30
int getLength(int* x); 
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = getLength(a);
	printf("长度为：%d\n", n);
	return 0;
}

int getLength(int* x)   /*参数为指针*/
{
	int n = 0;
	while (*x != '\0')
	{
		n++;
		x++;
	}
	return n;
}
     //题目1
#include<stdio.h>																//在c++里面长度为9但在stdio里面长度为30
int getLength(int x[]); 
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = getLength(a);
	printf("长度为：%d\n", n);
	return 0;
}

int getLength(int x[])   /*参数为数组*/
{
	int n = 0;
	while (x[n]  != 0)
	{
		n++;
	}
	return n;
}



      //题目2
#include<stdio.h>
int upDate(int x[]);
int main()
{
	int y[10] = { 1,2,3,4,5,6,7 };                   //把10改成7,把<10也改成<7。为什么也报错，我数组就七个值ya 。
	upDate(y);
	printf("结果为:\n");
	for (int i = 0; i < 10; i++) 
	{
		printf("%d ", y[i]);
	}
	return 0;
}
int upDate(int x[])
{
	int i, k;
	int p = 0;
	//while (*x != '\0')                       //运行结果不对
	//		{
	//			p++;
	//			x++;
	//		}

	//while (x[p]  != 0)                        
	//{
	//	p++;
	//}		
	                                         ////p = sizeof(x) / sizeof(x[0]);  运行结果不对
	for (p; x[p] != 0; p++);                //可以正确运行但如果数组中有0就会出错，所以想用前面//while (*x != '\0')的办法，但是运行结果不对
	printf("请输入想要替换的位置:\n");
	scanf_s("%d", &i);						   //输入想要修改的位置
	if (i < p)
	{
		printf("请输入想要替换的值:\n");
		scanf_s("%d", &k);					   //输入想要修改的值
		x[i] = k;
		return x[i];
	}
	else
		printf("你想要替换的位置不存在!\n");
}
	