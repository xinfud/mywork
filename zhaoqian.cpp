# include <stdio.h>
# define max 3

int main(void){
	int use,sum = 0,a,rmb[] = {5,2,1};
	scanf("%d",&a);
	for(int i = 0;i < max;++i){
		use = a / rmb[i];
		sum += use;
		a -= use * rmb[i];
		}
		
		printf("sum = %d",sum);
	return 0;
}
