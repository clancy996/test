#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
struct Student
{
	int data;
	int num;
	char name;
	char sex;
	int age;
	struct Student* next;
};
struct Student* head;
int i = 0;//退出程序用的
void CreateList(int dataItem,int numItem,char nameItem,char sexItem,int ageItem)
{
	struct Student* insertNode = (struct Student*)malloc(sizeof(struct Student));//为即将插入的结点保留空间
	if (insertNode == NULL)
	{
		printf("内存分配失败");
		exit(0);
	}
	else
	{
		insertNode->data = dataItem;
		insertNode->num = numItem;
		insertNode->name = nameItem;
		insertNode->sex = sexItem;
		insertNode->age = ageItem;
		insertNode->next = head;
		head = insertNode;
		printf("节点已经插入。\n");
	}
}
void InsertListRandom(int dataItem, int numItem, char nameItem, char sexItem, int ageItem)
{
	struct Student* insertNode = (struct Student*)malloc(sizeof(struct Student));
	struct Student* tempNode;//临时节点
	int insertPos;//新节点插入的位置。
	if (insertNode == NULL)
	{
		printf("该学生数据分配内存失败\n");
		exit(0);
	}
	else
	{
		printf("请输入要插入的序号位置\n");
		scanf("%d", &insertPos);
		insertNode->data = dataItem;
		insertNode->num = numItem;
		insertNode->name = nameItem;
		insertNode->sex = sexItem;
		insertNode->age = ageItem;
		tempNode = head;//将临时节点=头节点，确保遍历是从头开始
		for (int i = 0; i < insertPos; i++)
		{
			tempNode = tempNode->next;//遍历insertPos之前的节点
			if (tempNode == NULL)
			{
				printf("前面没有学生数据，无法插入新的学生数据\n");
				exit(0);
			}
		}
		insertNode->next = tempNode->next;//新插入的节点指向临时插入节点后面的节点，相当于新节点inserNode替代了临时插入节点tempNode
		tempNode->next = insertNode;//将临时节点的next指针指向了新节点。也就是说，临时节点的next指针指向了新节点，将新节点插入到了链表中。
		printf("学生数据插入成功\n");
	}
}
void DeleteRandomNode()
{
	struct Student* deleteNode;//要删除的节点
	struct Student* prevDeleteNode;//要删除的节点的前置节点
	deleteNode = head;
	prevDeleteNode = head;
	int deleteNodePos;//想要删除的位置position
	printf("输入你想要删除的学生数据的序号\n");
	scanf("%d", &deleteNodePos);
	int i;
	for ( i = 0; i < deleteNodePos; i++)
	{
		if (deleteNode == NULL)
		{
			printf("系统中没有你要删除的第%d个学生数据", deleteNodePos);
			exit(0);
		}
		prevDeleteNode = deleteNode; //逐个遍历节点，找到要删除的节点
		deleteNode = deleteNode->next;//逐个遍历节点，找到要删除的节点
		
	}
	if (i == 0)
	{
		head = deleteNode->next;
		deleteNode=NULL;
		free(deleteNode);
	}
	else 
	{
		prevDeleteNode->next = deleteNode->next;
		deleteNode = NULL;
		free(deleteNode);
	}
	printf("删除了节点。\n\n");
}
void TraverseListNode()
{
	struct Student* travNode = head;
	if (head == NULL)
	{
		printf("学生系统还未录入学生数据,请重新选择\n\n");
		return ;
	}
	else
	{
		printf("该学生系统的所有学生数据如下:\n 序号 学号 姓名 性别 年龄\n");
		while (travNode != NULL)
		{
			printf("%d %d %c %c %d\n\n", travNode->data,travNode->num, travNode->name,travNode->sex,travNode->age);
			travNode = travNode->next;//节点自加
		}
	}
}
void SearchListNode()
{
	struct Student* findNode = head;
	int inputData;
	if (head == NULL)
	{
		printf("学生系统还未录入学生数据,请重新选择\n\n");
	}
	else
	{
		printf("请输入你要查找的学生序号\n");
		scanf("%d", &inputData);
		int pos = 0;//索引也就是元素的位置
		int found = 0;//用来判断当前进度
		while (findNode != NULL)
		{
			if (findNode->data == inputData)
			{
				printf("要查找的学生数据在%d序号,该学生系统的所有学生数据如下:\n 序号 学号 姓名 性别 年龄\n", pos + 1);
				printf("%d %d %c %c %d\n\n", findNode->data, findNode->num, findNode->name, findNode->sex, findNode->age);
				found = 1;
				break;
			}
			pos++;
			findNode = findNode->next;//搜索下一个节点
		}
		if (found != 1)
		{
			printf("没有找到你想要的元素\n");
		}
	}
}
void dow()
{
	 i = 1;
}
int main()
{
	int inputData;
	int inputNum;
	char inputName;
	char inputSex;
	int inputEge;
	int choice = 0;
	int condition;
	int scanfResult;
	do {
		printf("========学生系统========\n");
		printf("1.录入学生数据\n");
		printf("2.删除学生数据\n");
		printf("3.显示所有学生数据\n");
		printf("4.查找学生数据\n");
		printf("5.退出程序\n");
		printf("请输入要执行的程序：\n");
		scanf("%d", &choice);
		switch (choice)
		{

		case 1:
			do
			{
				printf("请输入序号：\n");
				scanfResult = scanf("%d", &inputData);
				if (scanfResult != 1) {
					printf("输入了错误的类型，请输入整数值。\n");
					fflush(stdin);  // 清空输入缓冲区
					continue;
				}
				printf("请输入学号：\n");
				scanfResult = scanf("%d", &inputNum);
				if (scanfResult != 1) {
					printf("输入了错误的类型，请输入整数值。\n");
					fflush(stdin);  // 清空输入缓冲区
					continue;
				}
				printf("请输入姓名：\n");
				scanfResult = scanf(" %c", &inputName);
				if (scanfResult != 1) {
					printf("输入了错误的类型，请输入字符值。\n");
					fflush(stdin);  // 清空输入缓冲区
					continue;
				}
				printf("请输入性别：\n");
				scanfResult = scanf(" %c", &inputSex);
				if (scanfResult != 1) {
					printf("输入了错误的类型，请输入字符值。\n");
					fflush(stdin);  // 清空输入缓冲区
					continue;
				}
				printf("请输入年龄：\n");
				scanfResult = scanf("%d", &inputEge);
				if (scanfResult != 1) {
					printf("输入了错误的类型，请输入整数值。\n");
					fflush(stdin);  // 清空输入缓冲区
					continue;
				}
				if (head == NULL)
				{
					CreateList(inputData, inputNum, inputName, inputSex, inputEge);
				}
				else
				{
					InsertListRandom(inputData, inputNum, inputName, inputSex, inputEge);
				}
				printf("输入0值继续‘当前程序’\n");
				scanf("%d", &condition);
			} while (condition == 0);
			break;
		case 2:
			DeleteRandomNode();
			break;
		case 3:
			TraverseListNode();
			break;
		case 4:
			SearchListNode();
			break;
		case 5:
			dow();
			break;
		default:
			printf("输入错误!请重新输入!\n\n");
			break;
		}
	} while (i == 0);
	return 0;
}
