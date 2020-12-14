# include <stdio.h>
# include <stdlib.h>
# include <malloc.h> 
struct Node{//节点类型 
	int data;
	struct Node* Next;
};
struct Node* createlist(){//创建一个头结点 
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	headNode->Next = NULL;
	return headNode;
}
struct Node* createNode(int data){//创建结点 
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->Next = NULL;
	return newNode;
}
void insert1Node(struct Node* headNode,int data){//一直在链表的头结点的下一个添加结点（节点的插入） 
	struct Node* newNode = createNode(data);
	newNode->Next = headNode->Next;
	headNode->Next = newNode; 
}
void insertNode(struct Node* headNode,int data){//在链表的末尾添加节点（节点的插入） 
	struct Node* newNode = createNode(data);
	while(headNode->Next){
		headNode = headNode->Next;
	}
	headNode->Next = newNode;
	newNode->Next = NULL;
}
void deletNode(struct Node*headNode,int record){//结点的删除 
	struct Node* headfront = headNode;
	struct Node* head = headNode->Next;
	if(headNode->Next == NULL){
		printf("删除失败链表为空");
	}
	else{
		while(head->data != record){
			headfront = headNode;
			head = headfront->Next;
			if(head == NULL){
				printf("没有找到相关数据");
				return; 
			}
		}
		headfront->Next = head->Next;
		free(head);
	}
}
void printlist(struct Node* head){//链表的输出 
	struct Node* Move = head;
	if(Move != NULL){
		printf("%d",Move->data);
		Move = Move->Next;
	}
}
struct Node* midderNode(struct Node* headNode){//链表的中点的寻找 
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
/*链表的翻转可以根据上面两种对链表结点的添加进行实现。(该方法会重新创建一个链表)*/
void turnlist(struct Node* headNode){//在原链表进行翻转 
	struct Node* find1 = headNode->Next;
	struct Node* find2 = find1->Next;
	if(find2 == NULL){
		printf("该链表不需要翻转\n"); 
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
		printf("请输入你需要加入结点的的数据");
		scanf("%d",&ps.data);
		insertNode(list,ps.data);
		printf("请输入Y或N来表明你是否还需要添加元素\n");
		fflush(stdin);
		char choice = getchar();
		if(choice == 'N'){
			break;
		} 
	}
	printlist(list);
	return 0;
} 
