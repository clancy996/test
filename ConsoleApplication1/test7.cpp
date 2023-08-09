//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//struct Node
//{
//	int data;
//	struct Node* next;
//	struct Node* prev;
//};
//struct Node* head;
//void inser(int dataItem)
//{
//	struct Node* insertNode = (struct Node*)malloc(sizeof(struct Node));
//	if (insertNode == NULL)
//	{
//		printf("内存不足.\n");
//	}
//	else
//	{
//		if (head == NULL)
//		{
//			printf("是一个空链表.\n");
//			insertNode->next = NULL;
//			insertNode->prev = NULL;
//			insertNode->data = dataItem;
//			head = insertNode;
//		}
//		else
//		{
//			printf("节点已经插入.\n");
//			insertNode->data = dataItem;
//			insertNode->next = head;
//			insertNode->prev = NULL;
//			head->prev = NULL;
//			head = insertNode;
//		}
//
//	}
//
//}
//void InsertListLast(int dataItem)
//{
//	struct Node* inserNode = (struct Node*)malloc(sizeof(struct Node));
//	struct Node* tempNode = head;
//	if (inserNode == NULL)
//	{
//		printf("内存不足!\n");
//	}
//	else
//	{
//		if (head == NULL)
//		{
//			inserNode->data = dataItem;
//			printf("该链表为空!\n");
//			//inserNode->data = dataItem;
//			inserNode->next = NULL;
//			inserNode->prev = NULL;
//			head = inserNode;
//		}
//		else
//		{
//			while (tempNode->next != NULL)
//			{
//				tempNode = tempNode->next;
//			}
//			//inserNode->data = dataItem;
//			inserNode->next = NULL;
//			inserNode->prev = tempNode;
//			tempNode->next = inserNode;
//		}
//		printf("插入成功!\n");
//	}
//}
//void CreateDList(int dataItem)
//{
//	struct Node* insertNode = (struct Node*)malloc(sizeof(struct Node));
//	if (insertNode == NULL)
//	{
//		printf("内存不足.\n");
//	}
//	else
//	{
//		if (head == NULL)
//		{
//			printf("是一个空链表.\n");
//			insertNode->next = NULL;
//			insertNode->prev = NULL;
//			insertNode->data = dataItem;
//			head = insertNode;
//		}
//		else
//		{
//			printf("节点已经插入.\n");
//			insertNode->data = dataItem;
//			insertNode->next = head;
//			insertNode->prev = NULL;
//			head->prev = NULL;
//			head = insertNode;
//		}
//
//	}
//}
//void InsertListRandom(int dataItem)
//{
//	struct Node* inserNode = (struct Node*)malloc(sizeof(struct Node));
//	struct Node* tempNode = head;
//	int node;
//	if (inserNode == NULL)
//	{
//		printf("内存不足！");
//		exit(0);
//	}
//	else
//	{
//		printf("请输入想要插入的结点\n");
//		scanf("%d", &node);
//		for (size_t i=0;i<node;i++)
//		{
//			tempNode = tempNode->next;
//			if (tempNode == NULL)
//			{
//				printf("插入的位置前面没有节点，不能插入节点\n");
//				exit(0);
//			}
//		}
//			inserNode->next = tempNode->next;
//			inserNode->data = dataItem;
//			inserNode->prev = tempNode;
//			tempNode->next = inserNode;
//			tempNode->next->prev = inserNode;
//		printf("新结点插入成功！");
//	}
//}
//void DeleteDListBegin()
//{
//	struct Node* deleteNode;
//	if (head == NULL)
//	{
//		printf("空链表！");
//		exit(0);
//	}
//	else if (head->next == NULL)
//	{
//		head = NULL;
//		free(head);
//		printf("头结点删除了\n");
//	}
//	else
//	{
//		deleteNode = NULL;//head
//		head = head->next;
//		head->prev = NULL;
//		free(deleteNode);
//		printf("删除了节点\n");
//	}
//}
//int main()
//{
//	int choice;
//	int number;
//	int i;
//	printf("请选择要测试的函数：\n");
//	printf("1.插入到表头的函数\n");
//	printf("2.插入到表尾的函数\n");
//	printf("3.插入到随机数到链表函数\n");
//	printf("4.删除链表的第一个节点\n");
//	printf("5.删除链表的最后一个节点\n");
//	printf("6.删除链表的任意节点\n");
//	printf("7.遍历链表\n");
//	printf("8.查找\n");
//	scanf("%d", &choice);
//	switch (choice)
//	{
//	case 1:
//		do {
//			printf("请输入插入的数字\n");
//			scanf("%d", &number);
//			inser(number);
//			printf("输入非0退出程序\n");
//			scanf("%d", &i);
//		} while (i == 0);
//		break;
//	case 2:
//		do {
//			printf("请输入插入的数字\n");
//			scanf("%d", &number);
//			InsertListLast(number);
//			printf("输入非0退出程序\n");
//			scanf("%d", &i);
//		} while (i == 0);
//		break;
//	case 3:
//		do {
//			printf("请输入插入的数字\n");
//			scanf("%d", &number);
//			if (head == NULL)
//			{
//				CreateDList(number);
//			}
//			else
//			{
//				InsertListRandom(number);
//			}
//			printf("输入非0退出程序\n");
//			scanf("%d", &i);
//		} while (i == 0);
//		break;
//	case 4:
//		do {
//			printf("请输入插入的数字\n");
//			scanf("%d", &number);
//			if (head == NULL)
//			{
//				CreateDList(number);
//			}
//			printf("输入非0退出程序\n");
//			scanf("%d", &i);
//		} while (i == 0);
//		DeleteDListBegin();
//		break;
//	default:
//		break;
//	}
//	return 0;
//}