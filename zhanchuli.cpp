# include <stdio.h>
int f[20],n;
int main(void){
	scanf("%d",&n);
	f[0] = 1;
	f[1] = 1;
	for(int i = 2;i<=n;++i){
		for(int j = 0;j<i;++j){
			f[i] += f[j] * f[i-j-1];
		}
	}
	printf("%d",f[n]);
	return 0;
}
