//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int number;
//	int* a;
//	int i;
//	printf(" ‰»Î ˝¡ø£∫");
//	scanf_s("%d", &number);
//	a = (int*)malloc(number * sizeof(int));
//	for (i = 0; i < number; i++)
//	{
//		scanf_s("%d",&a[i]);
//	}
//	for (i = number - 1; i >= 0; i--)
//	{
//		printf("%d", a[i]);
//	}
//	free(a);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//void check(int* p);
//int main()
//{
//	int* p1;
//	int i;
//	p1 = (int*)malloc(5 * sizeof(int));
//	for (i = 0; i <5; i++)
//	{
//		scanf_s("%d", p1 + i);
//	}
//	check(p1);
//	free(p1);
//	return 0;
//}
//void check(int* p)
//{
//	printf("they are fail£∫\n");
//	for (int i = 0; i < 5; i++)
//	{
//		if (p[i] < 60) 
//		{
//			printf("%d ", p[i]);
//		}
//	}
//}
// 
// 
// 


//#include<stdio.h>
//int main()
//{
//	struct student 
//	{
//		int num;
//		char name[5];
//		char sex;
//		int age;
//		float score;
//	}a = { 101001,"jack",'M',29,80.7 }, b = { 101111,"bob",'M',36,77.9 };
//	printf("%ld\n%s\n%c\n%d\n%f\n", a.num, b.name, a.sex, a.age, a.score);
//	printf("%ld\n%s\n%c\n%d\n%f\n", b.num, b.name, b.sex, b.age, b.score);
//	return 0;
//
//}


//#include<string.h>
//#include<stdio.h>
//
//int main()
//{
//	struct Person
//	{
//		char name[20];
//		int count;
//	}leader[3] = { "yu",0,"li",0,"zhang",0 };
//	int i, j;
//	char leader_name[20];
//	for (i = 1; i <= 10; i++)
//	{
//		scanf_s("%19s", leader_name, sizeof(leader_name));
//		for (j = 0; j <3; j++)
//		{
//			if (strcmp(leader_name, leader[j].name) == 0)
//			leader[j].count++;
//		}
//	}
//	printf("\nResult:\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%5s:%d\n", leader[i].name, leader[i].count);
//	}
//	return 0;
//
//}


//#include<stdio.h>
//int main()
//{
//	struct student
//	{
//		int num;
//		char name[20];
//		float score;
//	}stu[] = { {1,"jack",89.6},{2,"bob",66.5},{3,"mike",99.5},{4,"a",56.3},{5,"w",78.2},{6,"s",28.2} };
//	int k, i;
//	const int n = 6;
//	for ( k = 0; k < n; k++)
//	{
//		for (i = 0; i < n-k-1; i++)
//		{
//			struct student x;
//			if (stu[i].score < stu[i + 1].score) 
//			{
//				x = stu[i];
//				stu[i] = stu[i + 1];
//				stu[i + 1] = x;
//			}
//		}
//	}
//	for ( i = 0; i < n; i++) 
//	{
//		printf("%-3d %5s %.2f\n",stu[i].num, stu[i].name, stu[i].score);
//	}
//	return 0;
//}

//#include<stdio.h>
//struct student
//{
//	int num;
//	float score;
//	struct student* next;
//};
//int main()
//{
//	struct student a, b, c, * p, * head;
//	a.num = 1; a.score = 89.5;
//	b.num = 2; b.score = 49.2;
//	c.num = 3; c.score = 67.5;
//	head = &a;
//	a.next = &b;
//	b.next = &c;
//	c.next = NULL;
//	p = head;
//	while (p != NULL)
//	{
//		printf("%1d %5.1f\n", p->num, p->score);
//		p=p->next;
//	} 
//	return 0;
//}