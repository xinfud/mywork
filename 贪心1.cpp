# include <stdio.h>

int main(void){
	const int rmb[] = {200,100,20,10,5,1};
	const int num = 6;
	int x;
	scanf("%d",&x);
	int count = 0;
	for(int i = 0;i < num;++i){
		int use = x / rmb[i];
		count += use;
		x = x - rmb[i] * use;
		printf("��Ҫ���Ϊ%d��%d�ţ�",rmb[i],use);
		printf("ʣ����Ҫ֧���Ľ��Ϊ%d.\n",x);
	}
	printf("�ܹ���Ҫ%d��\n",count);
	return 0;
}
