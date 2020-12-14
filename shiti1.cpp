# include <stdio.h>

int main(void){
	int i,j,b = 0,t;
	scanf("%d",&t);
	int a[t],sum[t] = {0};
	for(i = 0;i < t;++i){
		scanf("%d",&a[i]);
	}
	for(j = 0;j < t;++j){
		while(a[j] != 0){
			b = a[j] % 2;
			a[j] = a[j] / 2;
			if(b == 1){
			++sum[j];
			}
		}
		printf("%d\n",sum[j]);
	}
	return 0;
} 
