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
void insertlistBegin(int dataitem)
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
//插入到任意节点。（表头到表尾之间的节点）
void InsertListRandom(int dataItem)
{
	struct Node *insertNode = (struct Node*)malloc(sizeof(struct Node*));
	struct Node *tempNode;//临时节点
	int insertPos;//新节点插入的位置。
	if (insertNode == NULL)
	{
		printf("分配内存失败\n");
		exit(0);
	}
	else
	{
		printf("请输入插入的位置\n");
		scanf("%d", &insertPos);
		insertNode->data = dataItem;
		tempNode = head;//将临时节点=头节点，确保遍历是从头开始
		for (int i = 0; i < insertPos; i++)
		{
			tempNode = tempNode->next;//遍历insertPos之前的节点
			if (tempNode == NULL)
			{
				printf("前面没有节点，无法插入新的节点\n");
				exit(0);
			}
		}
		insertNode->next = tempNode->next;//新插入的节点指向临时插入节点后面的节点，相当于新节点inserNode替代了临时插入节点tempNode
		tempNode->next = insertNode;//将临时节点的next指针指向了新节点。也就是说，临时节点的next指针指向了新节点，将新节点插入到了链表中。
		printf("新节点插入成功\n");
	}
}
//如果插入的点在表头，和插入表头的代码相同（放在插入到任意节点）
void CreateList(int dataItem)
{
	struct Node* insertNode = (struct Node*)malloc(sizeof(struct Node));//为即将插入的结点保留空间
	if (insertNode == NULL)
	{
		printf("内存分配失败");
		exit(0);
	}
	else
	{
		insertNode->data = dataItem;
		insertNode->next = head;
		head = insertNode;
		printf("节点已经插入。\n");
	}
}          
//删除第一个节点。
void DeleteFirstNode()
{
	struct Node* deleteNode;
	if (head == NULL)
	{
		printf("该链表为空链表，不用删除\n");
		exit(0);
	}
	else
	{
		deleteNode = head;
		head = deleteNode->next;
		deleteNode = NULL;
		free(deleteNode);
		printf("第一个节点已经删除\n");
	}
}
//删除最后一个节点。(1.链表只有一个节点  2.链表有多个节点)
void DeleteLastNode()
{
	struct Node* lastNode;
	struct Node* prevLastNode;
	if (head == NULL)
	{
		printf("空链表，不能删除节点");
	}
	else if (head->next == NULL)
	{
		printf("该链表只有head节点");
		head = NULL;
		free(head);
		printf("唯一的头节点已经删除");
	}
	else
	{
		lastNode = head;
		prevLastNode = head;
		while (lastNode->next != NULL)
		{
			prevLastNode = lastNode;
			lastNode = lastNode->next;
		}
		prevLastNode->next = NULL;
		lastNode = NULL;
		free(lastNode);
		printf("删除了最后一个节点\n");
	}
}
//删除任意节点。
void DeleteRandomNode()
{
	struct Node* deleteNode;//要删除的节点
	struct Node* prevDeleteNode;//要删除的节点的前置节点
	deleteNode = head;
	prevDeleteNode = head;
	int deleteNodePos;//想要删除的位置position
	printf("输入你想要删除的节点的位置的索引\n");
	scanf("%d", &deleteNodePos);
	for (int i=0;i<deleteNodePos;i++)
	{
		prevDeleteNode = deleteNode; //逐个遍历节点，找到要删除的节点
		deleteNode = deleteNode->next;//逐个遍历节点，找到要删除的节点
		if (deleteNode == NULL)
		{
			printf("链表中没有你要删除的第%d个节点",deleteNodePos);
			exit(0);
		}
	}
	prevDeleteNode->next = deleteNode->next;
	deleteNode = NULL;
	free(deleteNode);
	printf("删除了节点。\n");
}
//遍历链表。
void TraverseListNode()
{
	struct Node* travNode = head;
	if (head == NULL)
	{
		printf("空链表不需要遍历\n");
		exit(0);
	}
	else
	{
		printf("该链表不是空链表，其值为:\n");
		while (travNode != NULL)
		{
			printf("%d\n", travNode->data);
			travNode = travNode->next;//节点自加
		}
	}
}
//查找。遍历整个链表，然后让遍历的结果与要查找的结点进行比对
void SearchListNode()
{
	struct Node *findNode=head;
	int inputData;
	if (head == NULL)
	{
		printf("该链表为空链表\n");
		exit(0);
	}
	else
	{
		printf("请输入你要查找的元素\n");
		scanf("%d", &inputData);
		int pos = 0;//索引也就是元素的位置
		int found = 0;//用来判断当
		while (findNode!=NULL)
		{
			if (findNode->data == inputData)
			{
				printf("要查找的元素在%d位置,其值为%d\n", pos + 1,findNode->data);
				found = 1;
				break;
			}
			pos++;
			findNode = findNode ->next;//搜索下一个节点
		}
			if(found!=1)
			{
				printf("没有找到你想要的元素\n");
			}
	}
}


//int main01(void) 
//{
//
//	int inputData;
//	int choice;
//	do 
//	{
//		//表头插入
//		/*printf("输入整数\n");
//		scanf_s("%d", &inputData);
//		insertlistbegin(inputData);
//		printf("输入一个非0值退出程序\n");
//		scanf("%d,&choice");*/
//	
//		//表尾插入节点
//		/*printf("输入整数\n");
//		scanf("%d", &inputData);
//		InsertListLast(inputData);
//		printf("输入一个非0值退出程序\n");
//		scanf("%d",&choice);*/
//		
//		//插入中间节点
//		/*printf("请输入插入节点的数据\n");
//		scanf("%d", &inputData);
//		if (head==NULL)
//		{
//			CreateList(inputData);
//		}
//		else
//		{
//			InsertListRandom(inputData);
//		}
//		printf("输入一个非0值退出程序\n");
//		scanf("%d", &choice);*/
//		
//		//删除第一个节点
//		/*printf("请输入一个整数\n");
//		scanf("%d", &inputData);
//		if (head == NULL)
//		{
//			CreateList(inputData);
//		}
//		DeleteFirstNode();
//		printf("输入一个非0值退出程序\n");
//		scanf("%d",&choice);*/
//	} while (choice == 0);
//	return 0;
//}


//int main03(void)
//{
//	int inputData;
//	int choice;
//	do
//	{
//		//删除最后一个节点
//		/*printf("输入一个整数\n");
//		scanf("%d", &inputData);
//		CreateList(inputData);
//		printf("输入一个非0值退出程序\n");
//		scanf("%d", &choice);*/
//		
//		//删除任意节点
//		/*printf("输入一个整数\n");
//		scanf("%d", &inputData);
//		CreateList(inputData);
//		printf("输入一个非0值退出程序\n");
//		scanf("%d", &choice); */
//
//		//遍历链表
//		/*printf("输入一个整数\n");
//		scanf("%d", &inputData);
//		CreateList(inputData);
//		printf("输入一个非0值退出程序\n");
//		scanf("%d", &choice);*/
//
//		//查找
//		printf("输入一个整数\n");
//		scanf("%d", &inputData);
//		CreateList(inputData);
//		printf("输入一个非0值退出程序\n");
//		scanf("%d", &choice);
//	} while (choice==0);
//	//DeleteLastNode();
//	//DeleteRandomNode();
//	//TraverseListNode();
//	SearchListNode();
//	return 0;
//}


int main()
{
	int inputData = 0;
	int choice = 0;
	int condition;
	printf("请选择要测试的函数：\n");
	printf("1.插入到表头的函数\n");
	printf("2.插入到表尾的函数\n");
	printf("3.插入到随机数到链表函数\n");
	printf("4.删除链表的第一个节点\n");
	printf("5.删除链表的最后一个节点\n");
	printf("6.删除链表的任意节点\n");
	printf("7.遍历链表\n");
	printf("8.查找\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		do
		{
			printf("请输入要插入的整数：\n");
			scanf("%d", &inputData);
			insertlistBegin(inputData);
			printf("输入一个非0值退出程序\n");
			scanf("%d", &condition);
		} while (condition == 0);
		break;
	case 2:
		do
		{
			printf("输入整数\n");
			scanf("%d", &inputData);
			InsertListLast(inputData);
			printf("输入一个非0值退出程序\n");
			scanf("%d", &condition);
		} while (condition == 0);
		break;
	case 3:
		do
		{
			printf("请输入插入节点的数据\n");
			scanf("%d", &inputData);
			if (head == NULL)
			{
				CreateList(inputData);
			}
			else
			{
				InsertListRandom(inputData);
			}
			printf("输入一个非0值退出程序\n");
			scanf("%d", &condition);
		} while (condition == 0);
		break;
	case 4:
		do
		{
			printf("请输入一个整数\n");
			scanf("%d", &inputData);
			if (head == NULL)
			{
				CreateList(inputData);
			}
			DeleteFirstNode();
			printf("输入一个非0值退出程序\n");
			scanf("%d", &condition);
		} while (condition == 0);
		break;
	case 5:
		do
		{
			printf("输入一个整数\n");
			scanf("%d", &inputData);
			CreateList(inputData);
			printf("输入一个非0值退出程序\n");
			scanf("%d", &condition);
		} while (condition == 0);
		DeleteLastNode();
		break;
	case 6:
		do {
			printf("输入一个整数\n");
			scanf("%d", &inputData);
			CreateList(inputData);
			printf("输入一个非0值退出程序\n");
			scanf("%d", &condition);
		} while (condition == 0);
		DeleteRandomNode();
		break;
	case 7:
		do
		{
			printf("输入一个整数\n");
			scanf("%d", &inputData);
			CreateList(inputData);
			printf("输入一个非0值退出程序\n");
			scanf("%d", &condition);
		} while (condition == 0);
		TraverseListNode();
		break;
	case 8:
		do
		{
			printf("输入一个打算放进列表的整数\n");
			scanf("%d", &inputData);
			CreateList(inputData);
			printf("输入一个非0值退出程序\n");
			scanf("%d", &condition);
		} while (condition == 0);
		SearchListNode();
		break;
	default:
		break;
	}
	return 0;
}

