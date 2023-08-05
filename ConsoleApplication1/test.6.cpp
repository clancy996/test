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
void insertlistBegin(int dataitem)
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
//���뵽����ڵ㡣����ͷ����β֮��Ľڵ㣩
void InsertListRandom(int dataItem)
{
	struct Node *insertNode = (struct Node*)malloc(sizeof(struct Node*));
	struct Node *tempNode;//��ʱ�ڵ�
	int insertPos;//�½ڵ�����λ�á�
	if (insertNode == NULL)
	{
		printf("�����ڴ�ʧ��\n");
		exit(0);
	}
	else
	{
		printf("����������λ��\n");
		scanf("%d", &insertPos);
		insertNode->data = dataItem;
		tempNode = head;//����ʱ�ڵ�=ͷ�ڵ㣬ȷ�������Ǵ�ͷ��ʼ
		for (int i = 0; i < insertPos; i++)
		{
			tempNode = tempNode->next;//����insertPos֮ǰ�Ľڵ�
			if (tempNode == NULL)
			{
				printf("ǰ��û�нڵ㣬�޷������µĽڵ�\n");
				exit(0);
			}
		}
		insertNode->next = tempNode->next;//�²���Ľڵ�ָ����ʱ����ڵ����Ľڵ㣬�൱���½ڵ�inserNode�������ʱ����ڵ�tempNode
		tempNode->next = insertNode;//����ʱ�ڵ��nextָ��ָ�����½ڵ㡣Ҳ����˵����ʱ�ڵ��nextָ��ָ�����½ڵ㣬���½ڵ���뵽�������С�
		printf("�½ڵ����ɹ�\n");
	}
}
//�������ĵ��ڱ�ͷ���Ͳ����ͷ�Ĵ�����ͬ�����ڲ��뵽����ڵ㣩
void CreateList(int dataItem)
{
	struct Node* insertNode = (struct Node*)malloc(sizeof(struct Node));//Ϊ��������Ľ�㱣���ռ�
	if (insertNode == NULL)
	{
		printf("�ڴ����ʧ��");
		exit(0);
	}
	else
	{
		insertNode->data = dataItem;
		insertNode->next = head;
		head = insertNode;
		printf("�ڵ��Ѿ����롣\n");
	}
}          
//ɾ����һ���ڵ㡣
void DeleteFirstNode()
{
	struct Node* deleteNode;
	if (head == NULL)
	{
		printf("������Ϊ����������ɾ��\n");
		exit(0);
	}
	else
	{
		deleteNode = head;
		head = deleteNode->next;
		deleteNode = NULL;
		free(deleteNode);
		printf("��һ���ڵ��Ѿ�ɾ��\n");
	}
}
//ɾ�����һ���ڵ㡣(1.����ֻ��һ���ڵ�  2.�����ж���ڵ�)
void DeleteLastNode()
{
	struct Node* lastNode;
	struct Node* prevLastNode;
	if (head == NULL)
	{
		printf("����������ɾ���ڵ�");
	}
	else if (head->next == NULL)
	{
		printf("������ֻ��head�ڵ�");
		head = NULL;
		free(head);
		printf("Ψһ��ͷ�ڵ��Ѿ�ɾ��");
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
		printf("ɾ�������һ���ڵ�\n");
	}
}
//ɾ������ڵ㡣
void DeleteRandomNode()
{
	struct Node* deleteNode;//Ҫɾ���Ľڵ�
	struct Node* prevDeleteNode;//Ҫɾ���Ľڵ��ǰ�ýڵ�
	deleteNode = head;
	prevDeleteNode = head;
	int deleteNodePos;//��Ҫɾ����λ��position
	printf("��������Ҫɾ���Ľڵ��λ�õ�����\n");
	scanf("%d", &deleteNodePos);
	for (int i=0;i<deleteNodePos;i++)
	{
		prevDeleteNode = deleteNode; //��������ڵ㣬�ҵ�Ҫɾ���Ľڵ�
		deleteNode = deleteNode->next;//��������ڵ㣬�ҵ�Ҫɾ���Ľڵ�
		if (deleteNode == NULL)
		{
			printf("������û����Ҫɾ���ĵ�%d���ڵ�",deleteNodePos);
			exit(0);
		}
	}
	prevDeleteNode->next = deleteNode->next;
	deleteNode = NULL;
	free(deleteNode);
	printf("ɾ���˽ڵ㡣\n");
}
//��������
void TraverseListNode()
{
	struct Node* travNode = head;
	if (head == NULL)
	{
		printf("��������Ҫ����\n");
		exit(0);
	}
	else
	{
		printf("�������ǿ�������ֵΪ:\n");
		while (travNode != NULL)
		{
			printf("%d\n", travNode->data);
			travNode = travNode->next;//�ڵ��Լ�
		}
	}
}
//���ҡ�������������Ȼ���ñ����Ľ����Ҫ���ҵĽ����бȶ�
void SearchListNode()
{
	struct Node *findNode=head;
	int inputData;
	if (head == NULL)
	{
		printf("������Ϊ������\n");
		exit(0);
	}
	else
	{
		printf("��������Ҫ���ҵ�Ԫ��\n");
		scanf("%d", &inputData);
		int pos = 0;//����Ҳ����Ԫ�ص�λ��
		int found = 0;//�����жϵ�
		while (findNode!=NULL)
		{
			if (findNode->data == inputData)
			{
				printf("Ҫ���ҵ�Ԫ����%dλ��,��ֵΪ%d\n", pos + 1,findNode->data);
				found = 1;
				break;
			}
			pos++;
			findNode = findNode ->next;//������һ���ڵ�
		}
			if(found!=1)
			{
				printf("û���ҵ�����Ҫ��Ԫ��\n");
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
//		//��ͷ����
//		/*printf("��������\n");
//		scanf_s("%d", &inputData);
//		insertlistbegin(inputData);
//		printf("����һ����0ֵ�˳�����\n");
//		scanf("%d,&choice");*/
//	
//		//��β����ڵ�
//		/*printf("��������\n");
//		scanf("%d", &inputData);
//		InsertListLast(inputData);
//		printf("����һ����0ֵ�˳�����\n");
//		scanf("%d",&choice);*/
//		
//		//�����м�ڵ�
//		/*printf("���������ڵ������\n");
//		scanf("%d", &inputData);
//		if (head==NULL)
//		{
//			CreateList(inputData);
//		}
//		else
//		{
//			InsertListRandom(inputData);
//		}
//		printf("����һ����0ֵ�˳�����\n");
//		scanf("%d", &choice);*/
//		
//		//ɾ����һ���ڵ�
//		/*printf("������һ������\n");
//		scanf("%d", &inputData);
//		if (head == NULL)
//		{
//			CreateList(inputData);
//		}
//		DeleteFirstNode();
//		printf("����һ����0ֵ�˳�����\n");
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
//		//ɾ�����һ���ڵ�
//		/*printf("����һ������\n");
//		scanf("%d", &inputData);
//		CreateList(inputData);
//		printf("����һ����0ֵ�˳�����\n");
//		scanf("%d", &choice);*/
//		
//		//ɾ������ڵ�
//		/*printf("����һ������\n");
//		scanf("%d", &inputData);
//		CreateList(inputData);
//		printf("����һ����0ֵ�˳�����\n");
//		scanf("%d", &choice); */
//
//		//��������
//		/*printf("����һ������\n");
//		scanf("%d", &inputData);
//		CreateList(inputData);
//		printf("����һ����0ֵ�˳�����\n");
//		scanf("%d", &choice);*/
//
//		//����
//		printf("����һ������\n");
//		scanf("%d", &inputData);
//		CreateList(inputData);
//		printf("����һ����0ֵ�˳�����\n");
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
	printf("��ѡ��Ҫ���Եĺ�����\n");
	printf("1.���뵽��ͷ�ĺ���\n");
	printf("2.���뵽��β�ĺ���\n");
	printf("3.���뵽�������������\n");
	printf("4.ɾ������ĵ�һ���ڵ�\n");
	printf("5.ɾ����������һ���ڵ�\n");
	printf("6.ɾ�����������ڵ�\n");
	printf("7.��������\n");
	printf("8.����\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		do
		{
			printf("������Ҫ�����������\n");
			scanf("%d", &inputData);
			insertlistBegin(inputData);
			printf("����һ����0ֵ�˳�����\n");
			scanf("%d", &condition);
		} while (condition == 0);
		break;
	case 2:
		do
		{
			printf("��������\n");
			scanf("%d", &inputData);
			InsertListLast(inputData);
			printf("����һ����0ֵ�˳�����\n");
			scanf("%d", &condition);
		} while (condition == 0);
		break;
	case 3:
		do
		{
			printf("���������ڵ������\n");
			scanf("%d", &inputData);
			if (head == NULL)
			{
				CreateList(inputData);
			}
			else
			{
				InsertListRandom(inputData);
			}
			printf("����һ����0ֵ�˳�����\n");
			scanf("%d", &condition);
		} while (condition == 0);
		break;
	case 4:
		do
		{
			printf("������һ������\n");
			scanf("%d", &inputData);
			if (head == NULL)
			{
				CreateList(inputData);
			}
			DeleteFirstNode();
			printf("����һ����0ֵ�˳�����\n");
			scanf("%d", &condition);
		} while (condition == 0);
		break;
	case 5:
		do
		{
			printf("����һ������\n");
			scanf("%d", &inputData);
			CreateList(inputData);
			printf("����һ����0ֵ�˳�����\n");
			scanf("%d", &condition);
		} while (condition == 0);
		DeleteLastNode();
		break;
	case 6:
		do {
			printf("����һ������\n");
			scanf("%d", &inputData);
			CreateList(inputData);
			printf("����һ����0ֵ�˳�����\n");
			scanf("%d", &condition);
		} while (condition == 0);
		DeleteRandomNode();
		break;
	case 7:
		do
		{
			printf("����һ������\n");
			scanf("%d", &inputData);
			CreateList(inputData);
			printf("����һ����0ֵ�˳�����\n");
			scanf("%d", &condition);
		} while (condition == 0);
		TraverseListNode();
		break;
	case 8:
		do
		{
			printf("����һ������Ž��б������\n");
			scanf("%d", &inputData);
			CreateList(inputData);
			printf("����һ����0ֵ�˳�����\n");
			scanf("%d", &condition);
		} while (condition == 0);
		SearchListNode();
		break;
	default:
		break;
	}
	return 0;
}

