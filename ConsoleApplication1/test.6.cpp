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
//// ����������
//
//struct ListNode {
//    char name[20];
//    int age;
//    struct ListNode* next;
//};
//
//// ��������
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
//// ���ӣ����룩����
//void insertNode(struct ListNode* head, char newName[20], int newAge) {
//    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    strcpy_s(newNode->name, newName);
//    newNode->age = newAge;
//    newNode->next = head;
//    head = newNode;
//}
//
//// ɾ������
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
//// �޸Ĳ���
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
//// ���Ҳ���
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
//	strcpy(charArray, "charArray");   //���ұ߸��Ƶ����
//	charP = (char*)malloc(500 * sizeof(char));//��̬�ڴ���䣬��С����500��char���͵�����
//	if (charP == NULL)
//	{
//		printf("û�з��䵽�ڴ�");
//	}
//	else
//	{
//		strcpy(charP, "�ɹ����䵽�ڴ�");
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
//ͷ���Ϊ��
struct Node* head;        
//���뵽��ͷ
void insertlistbegin(int dataitem)
{
	struct Node* insertNode = (struct Node*)malloc(sizeof(struct Node*));//Ϊ��������Ľ�㱣���ռ�
	if (insertNode == NULL)
	{
		printf("�ڴ����ʧ��");
		exit(0);
	}
	else
	{
		insertNode->data = dataitem;
		insertNode->next = head;
		head = insertNode;
		printf("�ڵ��Ѿ����롣");
	}
}
//���뵽��β
//1.�½ڵ���ӵ��������У�����ǿ�����head==NULL,insertNode��������Ψһ�Ľ�㣬head=insertNode
//2.�½ڵ���ӵ������ĩβ������
void InsertListLast(int dataitem)
{
	struct Node* insertNode = (struct Node*)malloc(sizeof(struct Node*));
	struct Node* tempNode;//����ʹ�õ���ʱ��㡣
	if (insertNode == NULL)
	{
		printf("�ڴ����ʧ��\n");
		exit(0);
	}
	else 
	{
		insertNode->data = dataitem;
		if (head == NULL)//Ϊ������
		{
			insertNode->next = NULL;
			head = insertNode;
			printf("�������Ѿ�����һ���ڵ�\n");
		}
		else//�ǿ�����
		{
			tempNode = head;
			while (tempNode->next != NULL)//û�е����һ���ڵ�
			{
				tempNode = tempNode->next;// ��ֵΪ��һ���ڵ�
			}
			tempNode->next = insertNode;
			insertNode->next = NULL;
			printf("�ҵ����һ���ڵ㣬�������µ������\n");
		}
	}
}
int main(void) 
{
	int inputData;
	int choice=0;
	do 
	{
		////��ͷ����
		//printf("��������\n");
		//scanf_s("%d", &inputData);
		//insertlistbegin(inputData);
		//printf("����һ����0ֵ�˳�����\n");
		//scanf("%d,&choice");
	
		//��β����ڵ�
		printf("��������\n");
		scanf("%d", &inputData);
		InsertListLast(inputData);
		printf("����һ����0ֵ�˳�����\n");
		scanf("%d",&choice);
	} while (choice == 0);
	return 0;
}


