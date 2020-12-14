# include <stdio.h>

int main(void){
	int n,sum = 1,sam = 1,sbm = 1;
	scanf("%d",&n);
	for(int i = 0;i<2;++i){
		for(int j = 1;j <= (n/2);++j){
			for(int k = 1; k < j/2;++k){
				sbm++;
			}
			sam++;
		}
		sum += sbm*sam;
	}
	printf("%d",sum);
	return 0;
}
