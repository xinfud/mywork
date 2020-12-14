# include <stdio.h>
# include <stdlib.h>

struct student{
	char name[20];
	int num;
	int math;
};
struct Node{
	struct student data;
	struct Node* Next;
};
struct Node* createlist(){
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	headNode->Next = NULL;
	return headNode;
}
struct Node* createNode(struct student data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->Next = NULL;
	return newNode;
}
void printlist(struct Node* headNode){
	struct Node* pMove = headNode->Next;
	printf("name\tnum\tmath\n");
	while(pMove){
		printf("%s\t%d\t%d\n",pMove->data.name,pMove->data.num,pMove->data.math);
		pMove = pMove->Next;
	}
	printf("\n");
}
/*void insertNode(struct Node* headNode,int data){
	struct Node* newNode = createlist(data);
	newNode->Next = headNode->Next;
	headNode->Next = newNode;
}
*/
void insertNode(struct Node* headNode,struct student data){
	struct Node* newNode = createNode(data);
	while(headNode->Next){
		headNode = headNode->Next;
	}
	newNode->Next = headNode->Next;
	headNode->Next =  newNode;
}
/*void deletNode(struct Node*headNode,int posData){
	struct Node* posNode = headNode->Next;
	struct Node* posNodeFront = headNode;
	if(posNode == NULL){
		printf("�޷�ɾ������Ϊ��"\n);
	}
	else{
		while(posNode->data != posdata){
			posNodeFront = posNode;
			posNode = posNodeFront->Next;
			if(posNode == NULL){
				printf("û���ҵ������Ϣ,�޷�ɾ��\n");
				return;
			}
		}
		posNodeFront->Next = posNode->Next;
		free(posNode);
	}
}
*/
int main(void){
	struct student info;
	 struct Node* list = createlist();
	 while(1){
	 	printf("������ѧ�������� ѧ�� ��ѧ�ɼ�:");
	 	scanf("%s %d %d",info.name,&info.num,&info.math);
	 	insertNode(list,info);
	 	printf("continue(Y/N):");
		fflush(stdin);
	 	char choice = getchar();
	 	if(choice == 'N'){
	 		break;
		 }
	 } 
	 printlist(list);
/*	int sum = 0;
	scanf("%d",&sum);
	struct Node* list = createNode();
	
	while(sum){
		int i = 0;
		scanf("%d",&i);
		insertNode(list,i);
		sum--;
	}
	printlist(list);
*/
	return 0;
}
