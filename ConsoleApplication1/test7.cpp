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
//		printf("�ڴ治��.\n");
//	}
//	else
//	{
//		if (head == NULL)
//		{
//			printf("��һ��������.\n");
//			insertNode->next = NULL;
//			insertNode->prev = NULL;
//			insertNode->data = dataItem;
//			head = insertNode;
//		}
//		else
//		{
//			printf("�ڵ��Ѿ�����.\n");
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
//		printf("�ڴ治��!\n");
//	}
//	else
//	{
//		if (head == NULL)
//		{
//			inserNode->data = dataItem;
//			printf("������Ϊ��!\n");
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
//		printf("����ɹ�!\n");
//	}
//}
//void CreateDList(int dataItem)
//{
//	struct Node* insertNode = (struct Node*)malloc(sizeof(struct Node));
//	if (insertNode == NULL)
//	{
//		printf("�ڴ治��.\n");
//	}
//	else
//	{
//		if (head == NULL)
//		{
//			printf("��һ��������.\n");
//			insertNode->next = NULL;
//			insertNode->prev = NULL;
//			insertNode->data = dataItem;
//			head = insertNode;
//		}
//		else
//		{
//			printf("�ڵ��Ѿ�����.\n");
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
//		printf("�ڴ治�㣡");
//		exit(0);
//	}
//	else
//	{
//		printf("��������Ҫ����Ľ��\n");
//		scanf("%d", &node);
//		for (size_t i=0;i<node;i++)
//		{
//			tempNode = tempNode->next;
//			if (tempNode == NULL)
//			{
//				printf("�����λ��ǰ��û�нڵ㣬���ܲ���ڵ�\n");
//				exit(0);
//			}
//		}
//			inserNode->next = tempNode->next;
//			inserNode->data = dataItem;
//			inserNode->prev = tempNode;
//			tempNode->next = inserNode;
//			tempNode->next->prev = inserNode;
//		printf("�½�����ɹ���");
//	}
//}
//void DeleteDListBegin()
//{
//	struct Node* deleteNode;
//	if (head == NULL)
//	{
//		printf("������");
//		exit(0);
//	}
//	else if (head->next == NULL)
//	{
//		head = NULL;
//		free(head);
//		printf("ͷ���ɾ����\n");
//	}
//	else
//	{
//		deleteNode = NULL;//head
//		head = head->next;
//		head->prev = NULL;
//		free(deleteNode);
//		printf("ɾ���˽ڵ�\n");
//	}
//}
//int main()
//{
//	int choice;
//	int number;
//	int i;
//	printf("��ѡ��Ҫ���Եĺ�����\n");
//	printf("1.���뵽��ͷ�ĺ���\n");
//	printf("2.���뵽��β�ĺ���\n");
//	printf("3.���뵽�������������\n");
//	printf("4.ɾ������ĵ�һ���ڵ�\n");
//	printf("5.ɾ����������һ���ڵ�\n");
//	printf("6.ɾ�����������ڵ�\n");
//	printf("7.��������\n");
//	printf("8.����\n");
//	scanf("%d", &choice);
//	switch (choice)
//	{
//	case 1:
//		do {
//			printf("��������������\n");
//			scanf("%d", &number);
//			inser(number);
//			printf("�����0�˳�����\n");
//			scanf("%d", &i);
//		} while (i == 0);
//		break;
//	case 2:
//		do {
//			printf("��������������\n");
//			scanf("%d", &number);
//			InsertListLast(number);
//			printf("�����0�˳�����\n");
//			scanf("%d", &i);
//		} while (i == 0);
//		break;
//	case 3:
//		do {
//			printf("��������������\n");
//			scanf("%d", &number);
//			if (head == NULL)
//			{
//				CreateDList(number);
//			}
//			else
//			{
//				InsertListRandom(number);
//			}
//			printf("�����0�˳�����\n");
//			scanf("%d", &i);
//		} while (i == 0);
//		break;
//	case 4:
//		do {
//			printf("��������������\n");
//			scanf("%d", &number);
//			if (head == NULL)
//			{
//				CreateDList(number);
//			}
//			printf("�����0�˳�����\n");
//			scanf("%d", &i);
//		} while (i == 0);
//		DeleteDListBegin();
//		break;
//	default:
//		break;
//	}
//	return 0;
//}