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
int i = 0;//�˳������õ�
void CreateList(int dataItem,int numItem,char nameItem,char sexItem,int ageItem)
{
	struct Student* insertNode = (struct Student*)malloc(sizeof(struct Student));//Ϊ��������Ľ�㱣���ռ�
	if (insertNode == NULL)
	{
		printf("�ڴ����ʧ��");
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
		printf("�ڵ��Ѿ����롣\n");
	}
}
void InsertListRandom(int dataItem, int numItem, char nameItem, char sexItem, int ageItem)
{
	struct Student* insertNode = (struct Student*)malloc(sizeof(struct Student));
	struct Student* tempNode;//��ʱ�ڵ�
	int insertPos;//�½ڵ�����λ�á�
	if (insertNode == NULL)
	{
		printf("��ѧ�����ݷ����ڴ�ʧ��\n");
		exit(0);
	}
	else
	{
		printf("������Ҫ��������λ��\n");
		scanf("%d", &insertPos);
		insertNode->data = dataItem;
		insertNode->num = numItem;
		insertNode->name = nameItem;
		insertNode->sex = sexItem;
		insertNode->age = ageItem;
		tempNode = head;//����ʱ�ڵ�=ͷ�ڵ㣬ȷ�������Ǵ�ͷ��ʼ
		for (int i = 0; i < insertPos; i++)
		{
			tempNode = tempNode->next;//����insertPos֮ǰ�Ľڵ�
			if (tempNode == NULL)
			{
				printf("ǰ��û��ѧ�����ݣ��޷������µ�ѧ������\n");
				exit(0);
			}
		}
		insertNode->next = tempNode->next;//�²���Ľڵ�ָ����ʱ����ڵ����Ľڵ㣬�൱���½ڵ�inserNode�������ʱ����ڵ�tempNode
		tempNode->next = insertNode;//����ʱ�ڵ��nextָ��ָ�����½ڵ㡣Ҳ����˵����ʱ�ڵ��nextָ��ָ�����½ڵ㣬���½ڵ���뵽�������С�
		printf("ѧ�����ݲ���ɹ�\n");
	}
}
void DeleteRandomNode()
{
	struct Student* deleteNode;//Ҫɾ���Ľڵ�
	struct Student* prevDeleteNode;//Ҫɾ���Ľڵ��ǰ�ýڵ�
	deleteNode = head;
	prevDeleteNode = head;
	int deleteNodePos;//��Ҫɾ����λ��position
	printf("��������Ҫɾ����ѧ�����ݵ����\n");
	scanf("%d", &deleteNodePos);
	int i;
	for ( i = 0; i < deleteNodePos; i++)
	{
		if (deleteNode == NULL)
		{
			printf("ϵͳ��û����Ҫɾ���ĵ�%d��ѧ������", deleteNodePos);
			exit(0);
		}
		prevDeleteNode = deleteNode; //��������ڵ㣬�ҵ�Ҫɾ���Ľڵ�
		deleteNode = deleteNode->next;//��������ڵ㣬�ҵ�Ҫɾ���Ľڵ�
		
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
	printf("ɾ���˽ڵ㡣\n\n");
}
void TraverseListNode()
{
	struct Student* travNode = head;
	if (head == NULL)
	{
		printf("ѧ��ϵͳ��δ¼��ѧ������,������ѡ��\n\n");
		return ;
	}
	else
	{
		printf("��ѧ��ϵͳ������ѧ����������:\n ��� ѧ�� ���� �Ա� ����\n");
		while (travNode != NULL)
		{
			printf("%d %d %c %c %d\n\n", travNode->data,travNode->num, travNode->name,travNode->sex,travNode->age);
			travNode = travNode->next;//�ڵ��Լ�
		}
	}
}
void SearchListNode()
{
	struct Student* findNode = head;
	int inputData;
	if (head == NULL)
	{
		printf("ѧ��ϵͳ��δ¼��ѧ������,������ѡ��\n\n");
	}
	else
	{
		printf("��������Ҫ���ҵ�ѧ�����\n");
		scanf("%d", &inputData);
		int pos = 0;//����Ҳ����Ԫ�ص�λ��
		int found = 0;//�����жϵ�ǰ����
		while (findNode != NULL)
		{
			if (findNode->data == inputData)
			{
				printf("Ҫ���ҵ�ѧ��������%d���,��ѧ��ϵͳ������ѧ����������:\n ��� ѧ�� ���� �Ա� ����\n", pos + 1);
				printf("%d %d %c %c %d\n\n", findNode->data, findNode->num, findNode->name, findNode->sex, findNode->age);
				found = 1;
				break;
			}
			pos++;
			findNode = findNode->next;//������һ���ڵ�
		}
		if (found != 1)
		{
			printf("û���ҵ�����Ҫ��Ԫ��\n");
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
		printf("========ѧ��ϵͳ========\n");
		printf("1.¼��ѧ������\n");
		printf("2.ɾ��ѧ������\n");
		printf("3.��ʾ����ѧ������\n");
		printf("4.����ѧ������\n");
		printf("5.�˳�����\n");
		printf("������Ҫִ�еĳ���\n");
		scanf("%d", &choice);
		switch (choice)
		{

		case 1:
			do
			{
				printf("��������ţ�\n");
				scanfResult = scanf("%d", &inputData);
				if (scanfResult != 1) {
					printf("�����˴�������ͣ�����������ֵ��\n");
					fflush(stdin);  // ������뻺����
					continue;
				}
				printf("������ѧ�ţ�\n");
				scanfResult = scanf("%d", &inputNum);
				if (scanfResult != 1) {
					printf("�����˴�������ͣ�����������ֵ��\n");
					fflush(stdin);  // ������뻺����
					continue;
				}
				printf("������������\n");
				scanfResult = scanf(" %c", &inputName);
				if (scanfResult != 1) {
					printf("�����˴�������ͣ��������ַ�ֵ��\n");
					fflush(stdin);  // ������뻺����
					continue;
				}
				printf("�������Ա�\n");
				scanfResult = scanf(" %c", &inputSex);
				if (scanfResult != 1) {
					printf("�����˴�������ͣ��������ַ�ֵ��\n");
					fflush(stdin);  // ������뻺����
					continue;
				}
				printf("���������䣺\n");
				scanfResult = scanf("%d", &inputEge);
				if (scanfResult != 1) {
					printf("�����˴�������ͣ�����������ֵ��\n");
					fflush(stdin);  // ������뻺����
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
				printf("����0ֵ��������ǰ����\n");
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
			printf("�������!����������!\n\n");
			break;
		}
	} while (i == 0);
	return 0;
}
