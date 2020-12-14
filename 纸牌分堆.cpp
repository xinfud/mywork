# include <stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	int m[n];
	for(int i = 0;i<n;++i){
		scanf("%d",&m[i]);
	}
	int sum = 0;
	for(int j = 0;j<n;++j){
		sum+=m[j];
	}
	int sam = sum/n;
	int k[n];
	for(int j = 0;j<n;++j){
		k[j] = m[j] - sam;
	}
	int count = 0;
	for(int j = 0;j<n;++j){
		if(k[j] != 0){
			k[j+1] += k[j];
			count += 1;
		}
	}
	printf("%d",count);
	return 0;
}
