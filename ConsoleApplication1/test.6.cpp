//#include<stdio.h>
//struct LinkNode
//{
//	int num;
//	struct LinkNode *next;
//};
//void test()
//{
//	struct LinkNode node1 = { 10 };
//	struct LinkNode node2 = { 20 };
//	struct LinkNode node3 = { 30 };
//	struct LinkNode node4 = { 40 };
//	struct LinkNode node5 = { 50 };
//	node1.next = &node2;
//	node2.next = &node3;
//	node3.next = &node4;
//	node4.next = &node5;
//	node5.next = NULL;
//	struct LinkNode *p = &node1;
//	while (p != NULL)
//	{
//		printf("%d ", p->num);
//		p = p->next;
//	}
//}
//int main()
//{
// test();
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include <string>
//// 定义链表结点
//
//struct ListNode {
//    char name[20];
//    int age;
//    struct ListNode* next;
//};
//
//// 创建链表
//struct ListNode* createList() {
//    struct ListNode* head = NULL;
//    struct ListNode* node1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* node2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* node3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//
//    strcpy_s(node1->name, "Alice");
//    node1->age = 20;
//    node1->next = node2;
//
//    strcpy_s(node2->name, "Bob");
//    node2->age = 21;
//    node2->next = node3;
//
//    strcpy_s(node3->name, "Charlie");
//    node3->age = 22;
//    node3->next = NULL;
//
//    head = node1;
//    return head;
//}
//
//// 增加（插入）操作
//void insertNode(struct ListNode* head, char newName[20], int newAge) {
//    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    strcpy_s(newNode->name, newName);
//    newNode->age = newAge;
//    newNode->next = head;
//    head = newNode;
//}
//
//// 删除操作
//void deleteNode(struct ListNode* head, char targetName[20]) {
//    struct ListNode* prevNode = NULL;
//    struct ListNode* currNode = head;
//
//    while (currNode != NULL) {
//        if (strcmp(currNode->name, targetName) == 0) {
//            if (prevNode == NULL) {
//                head = currNode->next;
//            }
//            else {
//                prevNode->next = currNode->next;
//            }
//            free(currNode);
//            break;
//        }
//        prevNode = currNode;
//        currNode = currNode->next;
//    }
//}
//
//// 修改操作
//void modifyNode(struct ListNode* head, char targetName[20], char newName[20], int newAge) {
//    struct ListNode* currNode = head;
//
//    while (currNode != NULL) {
//        if (strcmp(currNode->name, targetName) == 0) {
//            strcpy_s(currNode->name, newName);
//            currNode->age = newAge;
//            break;
//        }
//        currNode = currNode->next;
//    }
//}
//
//// 查找操作
//struct ListNode* findNode(struct ListNode* head, char targetName[20]) {
//    struct ListNode* currNode = head;
//
//    while (currNode != NULL) {
//        if (strcmp(currNode->name, targetName) == 0) {
//            return currNode;
//        }
//        currNode = currNode->next;
//    }
//
//    return NULL;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//int main()
//{
//	char charArray[100];
//	char* charP;
//	strcpy(charArray, "charArray");   //将右边复制到左边
//	charP = (char*)malloc(500 * sizeof(char));//动态内存分配，大小给了500个char类型的数据
//	if (charP == NULL)
//	{
//		printf("没有分配到内存");
//	}
//	else
//	{
//		strcpy(charP, "成功分配到内存");
//	}
//	printf("charArry=%s\n", charArray);
//	printf("charP=%s\n", charP);
//	return 0;
//	free(charP);
//}
 


#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
struct Node
{
	int data;
	struct Node* next;
};
//头结点为空
struct Node* head;        
//插入到表头
void insertlistbegin(int dataitem)
{
	struct Node* insertNode = (struct Node*)malloc(sizeof(struct Node*));//为即将插入的结点保留空间
	if (insertNode == NULL)
	{
		printf("内存分配失败");
		exit(0);
	}
	else
	{
		insertNode->data = dataitem;
		insertNode->next = head;
		head = insertNode;
		printf("节点已经插入。");
	}
}
//插入到表尾
//1.新节点添加到空链表中：如果是空链表，head==NULL,insertNode是链表中唯一的结点，head=insertNode
//2.新节点添加到链表的末尾：遍历
void InsertListLast(int dataitem)
{
	struct Node* insertNode = (struct Node*)malloc(sizeof(struct Node*));
	struct Node* tempNode;//遍历使用的临时结点。
	if (insertNode == NULL)
	{
		printf("内存分配失败\n");
		exit(0);
	}
	else 
	{
		insertNode->data = dataitem;
		if (head == NULL)//为空链表
		{
			insertNode->next = NULL;
			head = insertNode;
			printf("空链表已经插入一个节点\n");
		}
		else//非空链表
		{
			tempNode = head;
			while (tempNode->next != NULL)//没有到最后一个节点
			{
				tempNode = tempNode->next;// 赋值为下一个节点
			}
			tempNode->next = insertNode;
			insertNode->next = NULL;
			printf("找到最后一个节点，插入了新的最后结点\n");
		}
	}
}
int main(void) 
{
	int inputData;
	int choice=0;
	do 
	{
		////表头插入
		//printf("输入整数\n");
		//scanf_s("%d", &inputData);
		//insertlistbegin(inputData);
		//printf("输入一个非0值退出程序\n");
		//scanf("%d,&choice");
	
		//表尾插入节点
		printf("输入整数\n");
		scanf("%d", &inputData);
		InsertListLast(inputData);
		printf("输入一个非0值退出程序\n");
		scanf("%d",&choice);
	} while (choice == 0);
	return 0;
}


