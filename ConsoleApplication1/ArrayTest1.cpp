//#include<stdio.h>   //数组1 将2*3改为3*2
//int main() {
//	int a[2][3] = { {1,2,3},{4,5,6} };
//	int b[3][2], i, j;
//	printf("array a;\n");
//	for (i = 0; i <= 1; i++)
//	{
//		for (j = 0; j <= 2; j++)
//		{
//			printf("%5d", a[i][j]);
//			b[j][i] = a[i][j];
//		}
//		printf("\n");
//	}
//	printf("array b:\n");
//	for (j = 0; j <= 2; j++)
//	{
//		for (i = 0; i <= 1; i++)
//		{
//			printf("%5d", b[j][i]);
//		}
//		printf("\n");
//	} 
//	return 0;
//}

//#include<stdio.h> 数组2 排序
//int main()
//{
//	char a[5] = { 'a','b','c','d','e' };
//	int i;
//	for (i = 0; i <5; i++)
//	{
//		printf("%c", a[i]);
//	}
//	return 0;
//}

//#include<stdio.h> //函数1  调用函数
//int main()
//{
//	void a();
//	void b();
//	a();
//	b();
//	a();
//	return 0;
//}
//
//void a() {
//	printf("***********\n");
//}
//void b() {
//	printf("how do you do.\n");
//}


//#include<stdio.h>//函数2 比较两数字大小
//int main()
//{
//	int max(int x, int y);
//	int a, b, c;
// printf("请输入两数字：\n");
//	scanf_s("%d %d", &a, &b);    //scnaf_s
//	c = max(a, b);
//	printf("最大值为：%d", c);
//	return 0;
//}
//int max(int x,int y) 
//{
////	int z;
////	z = x > y ? x : y;
////	return z;
//	if (x > y)
//		return x;
//	else
//		return y;
//}

//float add(float x, float y);//求两数之和
//#include<stdio.h> 
//int main()
//{
//	float a, b, c;
//	printf("请输入两个实数：\n");
//	scanf_s("%f %f", &a,&b);
//	c = add(a, b);
//	printf("%f", c);
//	return 0;
//}
//float add(float x, float y)
//{
//	float z;
//	z = x + y;
//	return z;
//}


//函数嵌套
//#include<stdio.h>
//int main()
//{
//	int max1(int a, int b, int c, int d);
//	int a, b, c, d, e;
//	scanf_s("%d %d %d %d", &a, &b, &c, &d);
//	e = max1(a, b, c, d);
//	printf("%d\n", e);
//	return 0;
//}
//
//int max1(int a, int b, int c, int d)
//{
//	int max2(int a, int b);
//	/*int m1,m2,m3;
//	m1 = max2(a, b);
//	m2 = max2(c, d);
//	m3 = max2(m1, m2);
//	return m3;*/
//	int m;
//	m = max2(a, b);
//	m = max2(m, c);
//	m = max2(m, d);
//	return m;
//}
//
//int max2(int a, int b)
//{
//	if (a > b)
//	return a;
//	else
//	return b;
//}