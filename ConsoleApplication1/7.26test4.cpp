//     //题目1	
//#include<stdio.h>														//在c++里面长度为9但在stdio里面长度为30
//int getLength(char* x); 
//int main()
//{
//	char a[] = { '1',' 2',' 3', '4', '5', '6', '7', '8', '9'};
//	int n = getLength(a);
//	printf("长度为：%d\n", n);
//	return 0;
//}
//
//int getLength(char* x)   /*参数为指针*/
//{
//	int n = 0;
//	while (*x != '\0')
//	{
//		n++;
//		x++;
//	}
//	return n;
//}
     //题目1
//#include<stdio.h>																//在c++里面长度为9但在stdio里面长度为30
//int getLength(int x[]); 
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int n = getLength(a);
//	printf("长度为：%d\n", n);
//	return 0;
//}
//
//int getLength(int x[])   /*参数为数组*/
//{
//	int n = 0;
//	while (x[n]  != 0)
//	{
//		n++;
//	}
//	return n;
//}



      //题目2
//#include<stdio.h>
//int upDate(int x[]);
//int main()
//{
//	int y[7] = { 1,2,3,4,5,6,7 };                   
//	upDate(y);
//	printf("结果为:\n");
//	for (int i = 0; i < 7; i++) 
//	{
//		printf("%d ", y[i]);
//	}
//	return 0;
//}
//int upDate(int x[])
//{
//	int i, k;
//	int p = 0;
//	//while (x[p]  != '\0')                        
//	//{
//	//	p++;
//	//}														
//	for (p; x[p] != '\0'; p++);                
//	printf("请输入想要替换的位置:\n");
//	scanf_s("%d", &i);						   //输入想要修改的位置
//	if (i < p)
//	{
//		printf("请输入想要替换的值:\n");
//		scanf_s("%d", &k);					   //输入想要修改的值
//		x[i] = k;
//		/*return x[i];*/
//		return 0;
//	}
//	else
//		printf("你想要替换的位置不存在!\n");
//}
	