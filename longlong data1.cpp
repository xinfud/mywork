# include <stdio.h>
# include <stdlib.h>

struct Node{
	int data;
	struct Node* Next;
};
struct Node* createNode(){
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	headNode->Next = NULL;
	return headNode;
}
struct Node* createlist(int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->Next = NULL;
	return newNode;
}
void printlist(struct Node* headNode){
	struct Node* pMove = headNode->Next;
	while(pMove){
		printf("%-5d",pMove->data);
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
void insertNode(struct Node* headNode,int data){
	struct Node* newNode = createlist(data);
	while(headNode->Next){
		headNode = headNode->Next;
	}
	newNode->Next = headNode->Next;
	headNode->Next =  newNode;
}
void deletNode(struct Node*headNode,int posData){
	struct Node* posNode = headNode->Next;
	struct Node* posNodeFront = headNode;
	if(posNode == NULL){
		printf("无法删除链表为空"\n);
	}
	else{
		while(posNode->data != posdata){
			posNodeFront = posNode;
			posNode = posNodeFront->Next;
			if(posNode == NULL){
				printf("没有找到相关信息,无法删除\n");
				return;
			}
		}
		posNodeFront->Next = posNode->Next;
		free(posNode);
	}
}
int main(void){
	int sum = 0;
	scanf("%d",&sum);
	struct Node* list = createNode();
	while(sum){
		int i = 0;
		scanf("%d",&i);
		insertNode(list,i);
		sum--;
	}
	printlist(list);
	return 0;
}
