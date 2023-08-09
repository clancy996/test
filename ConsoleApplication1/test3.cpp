//#include<stdio.h>
//int main()
//{
//	void inv(int x[], int n);
//	int i, a[10] = { 3,7,9,11,0,6,7,5,4,2 };
//	printf("修改前：");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	inv(a, 10);
//	printf("修改后：");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	return 0;
//}
//void inv(int x[], int n)
//{
//	int temp, i, j, m = (n - 1) / 2;
//	for (i = 0; i <= m; i++)
//	{
//		j = n - 1 - i;
//		temp = x[i]; x[i] = x[j]; x[j] = temp;
//	}
//	return;
//}



//#include<stdio.h>
//int main()
//{
//	void a(int *x, int y);
//	int b[10] = { 3,7,9,11,0,6,7,5,4,2 };
//	int i;
//	printf("修改前：");
//	for (i = 0; i < 10; i++)
//	{	
//		printf("%d ", b[i]);  
//	}
//	printf("\n");
//	a(b, 10);                           
//	printf("修改后：");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}
//void a(int *x, int y)
//{
//	int *p, temp, *i, *j, m = (y- 1) / 2;
//	i = x; j = x + y - 1; p = x + m;
//	for (; i <=p; i++,j--)
//	{
//		temp =*i; *i = *j; *j = temp;
//	}
//	return;
//}


