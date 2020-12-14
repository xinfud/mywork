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
		printf("需要面额为%d的%d张，",rmb[i],use);
		printf("剩余需要支付的金额为%d.\n",x);
	}
	printf("总共需要%d张\n",count);
	return 0;
}
