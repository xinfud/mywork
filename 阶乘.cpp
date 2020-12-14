# include <stdio.h>

int main(void){
	int i = 1,t = 1,sum = 0,n;
	scanf("%d",&n);
	while(i <= n){
		t *= i;
		sum += t;
		i++;
	}
	printf("%d",sum);
	return 0;
}
