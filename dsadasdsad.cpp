# include <stdio.h>

int main(void){
	int sum = 0,n = 0;
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i < n;++i){
		scanf("%d",&a[i]);
	}
	for(int j = 1;j < n - 1;++j){
		if(((a[j+1] - a[j]) > (a[j] - a[j - 1] + 2))){
			sum = 1;
			break;
		}
		else if(((a[j+1] - a[j]) < (a[j] - a[j - 1] - 2))){
			sum = 1;
			break;
	}
	}
	if(sum == 1)
		printf("false");
	else if(sum == 0)
	    printf("true");
	return 0;
}
