# include <stdio.h>

int zhishu(int a,int b){
	int t = 1;
	for(int i = 0;i<b;++i){
		t *= a;
	}
	return t;
}
void digui(int n){
	int a = 0;
	if(n == 0){
		return;
	}
	while(true){
		if(n>=zhishu(2,a)){
			a++;
		}
		else
			break;
	}
	a -= 1;
	if(a == 0){
		printf("2(0)");
	}
	if(a == 1){
		printf("2");
	}
	if(a>1){
		printf("2(");
		digui(a);
		printf(")");
	}
	if(n != zhishu(2,a)){
		printf("+");
		digui(n-zhishu(2,a));
	}
}
int main(void){
	int n;
	scanf("%d",&n);
	digui(n);
	return 0;
}
