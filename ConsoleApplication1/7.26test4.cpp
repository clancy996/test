//     //��Ŀ1	
//#include<stdio.h>														//��c++���泤��Ϊ9����stdio���泤��Ϊ30
//int getLength(char* x); 
//int main()
//{
//	char a[] = { '1',' 2',' 3', '4', '5', '6', '7', '8', '9'};
//	int n = getLength(a);
//	printf("����Ϊ��%d\n", n);
//	return 0;
//}
//
//int getLength(char* x)   /*����Ϊָ��*/
//{
//	int n = 0;
//	while (*x != '\0')
//	{
//		n++;
//		x++;
//	}
//	return n;
//}
     //��Ŀ1
//#include<stdio.h>																//��c++���泤��Ϊ9����stdio���泤��Ϊ30
//int getLength(int x[]); 
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int n = getLength(a);
//	printf("����Ϊ��%d\n", n);
//	return 0;
//}
//
//int getLength(int x[])   /*����Ϊ����*/
//{
//	int n = 0;
//	while (x[n]  != 0)
//	{
//		n++;
//	}
//	return n;
//}



      //��Ŀ2
//#include<stdio.h>
//int upDate(int x[]);
//int main()
//{
//	int y[7] = { 1,2,3,4,5,6,7 };                   
//	upDate(y);
//	printf("���Ϊ:\n");
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
//	printf("��������Ҫ�滻��λ��:\n");
//	scanf_s("%d", &i);						   //������Ҫ�޸ĵ�λ��
//	if (i < p)
//	{
//		printf("��������Ҫ�滻��ֵ:\n");
//		scanf_s("%d", &k);					   //������Ҫ�޸ĵ�ֵ
//		x[i] = k;
//		/*return x[i];*/
//		return 0;
//	}
//	else
//		printf("����Ҫ�滻��λ�ò�����!\n");
//}
	