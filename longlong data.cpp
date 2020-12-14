# include <stdio.h>
# include <stdlib.h>

struct Node{
	int data;
	struct Node* Next;
};
struct Node* createlist(){
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
		printf("%d",pMove->data);
		pMove = pMove->Next;
	}
	printf("\n");
}
void insertNode(struct Node* headNode,int data){
	struct Node* newNode = createlist(data);
	newNode->Next = headNode->Next;
	headNode->Next = newNode;
}
int main(void){
	int sum = 0;
	scanf("%d",&sum);
	struct Node* list = createlist();
	while(sum){
		int i = 0;
		scanf("%d",&i);
		insertNode(list,i);
		sum--;
	}
	printlist(list);
	return 0;
}
