# include <stdio.h>

int main(void){
	int sum = 0,n,j,a = 0;
	scanf("%d",&n);
//	while(n){
	for(n;n > 0;n--){

		j = n;
		a = 1;
		for(int i = 1;i <= j;++i){
			a *= i;
		}
		sum += a;
	}
	printf("%d",sum);
	return 0;
}
