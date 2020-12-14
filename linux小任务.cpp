# include <stdio.h>
# include <stdlib.h>
# include <malloc.h> 
struct Node{//�ڵ����� 
	int data;
	struct Node* Next;
};
struct Node* createlist(){//����һ��ͷ��� 
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	headNode->Next = NULL;
	return headNode;
}
struct Node* createNode(int data){//������� 
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->Next = NULL;
	return newNode;
}
void insert1Node(struct Node* headNode,int data){//һֱ�������ͷ������һ����ӽ�㣨�ڵ�Ĳ��룩 
	struct Node* newNode = createNode(data);
	newNode->Next = headNode->Next;
	headNode->Next = newNode; 
}
void insertNode(struct Node* headNode,int data){//�������ĩβ��ӽڵ㣨�ڵ�Ĳ��룩 
	struct Node* newNode = createNode(data);
	while(headNode->Next){
		headNode = headNode->Next;
	}
	headNode->Next = newNode;
	newNode->Next = NULL;
}
void deletNode(struct Node*headNode,int record){//����ɾ�� 
	struct Node* headfront = headNode;
	struct Node* head = headNode->Next;
	if(headNode->Next == NULL){
		printf("ɾ��ʧ������Ϊ��");
	}
	else{
		while(head->data != record){
			headfront = headNode;
			head = headfront->Next;
			if(head == NULL){
				printf("û���ҵ��������");
				return; 
			}
		}
		headfront->Next = head->Next;
		free(head);
	}
}
void printlist(struct Node* head){//�������� 
	struct Node* Move = head;
	if(Move != NULL){
		printf("%d",Move->data);
		Move = Move->Next;
	}
}
struct Node* midderNode(struct Node* headNode){//������е��Ѱ�� 
	if(headNode->Next == NULL){
		return headNode;
	}
	struct Node* fast = headNode->Next;
	struct Node* low = headNode;
	while(fast && fast->Next){
		fast = fast->Next->Next;
		low = low->Next;
	}
	return low;
}
/*����ķ�ת���Ը����������ֶ����������ӽ���ʵ�֡�(�÷��������´���һ������)*/
void turnlist(struct Node* headNode){//��ԭ������з�ת 
	struct Node* find1 = headNode->Next;
	struct Node* find2 = find1->Next;
	if(find2 == NULL){
		printf("��������Ҫ��ת\n"); 
	}
	while(find2){
		find1->Next = headNode->Next;
		find1 = find2->Next;
		headNode->Next = find2;
		find2 = find1->Next;
	}
}
int main(void){
	struct Node ps;
	struct Node* list = createlist();
	while(true){
		printf("����������Ҫ������ĵ�����");
		scanf("%d",&ps.data);
		insertNode(list,ps.data);
		printf("������Y��N���������Ƿ���Ҫ���Ԫ��\n");
		fflush(stdin);
		char choice = getchar();
		if(choice == 'N'){
			break;
		} 
	}
	printlist(list);
	return 0;
} 
