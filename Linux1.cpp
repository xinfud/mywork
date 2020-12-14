# include <stdio.h>
# include <stdlib.h>
struct Node{
	int data;
	struct Node* Next;
};
struct Node* creatNode1(int data){
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	headNode->data = data;
	headNode->Next = NULL;
	return headNode;
}
void insertNode(struct Node* headNode,int data){
	struct Node* newNode = creatNode(data);
	while(headNode->Next){
		headNode->Next = headNode->Next->Next;
	}
	headNode->Next = newNode;
}
void deletNode(struct Node* headNode,int n){//n代表要删除的第几个元素 
	if(headNode->Next == NULL){
		free(headNode);
	}
	else{
		int i;
		struct Node* deletfront = headNode;
		struct Node* delet = headNode->Next;
		for(i = 1;i < n - 1;++i){
			if(i < n-2 && delet->Next == NULL){
				printf("链表不存在该结点");
				return;
			}
			else{
				deletfront = deletfront->Next;
				delet = delet->Next;
		 	}
		}
		deletfront->Next = delet->Next;
		free(delet);
	}
}
void deletend(struct Node*headNode){//末尾删除 
	deletfront = headNode;
	delet = headNode->Next;
	while(delet){
		delet = delet->Next;
		deletfront = deletfront->Next;
	}
	deletfront = NULL;
	free(delet);
}
int main(void){
	int data;
	scanf("%d",&data);
	struct Node *headNode = creatNode1(data);
	return 0;
}
