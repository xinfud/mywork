# include <stdio.h>
int n,k;
int a[25],sum;
bool isprime(int b){
	for(int i = 2;i * i <= b;++i){
		if(b%i == 0)
			return false;
	}
	return true;
}
void dfs(int start,int ans,int sam){
	if(ans == k)
		if(isprime(sam)){
			sum++;
			return;
		}
	for(int i = start;i<n;i++){
		dfs(i + 1,ans + 1,sam + a[i]);
	}	
	return;
}
int main(void){
	scanf("%d %d",&n,&k);
	for(int i = 0;i<n;++i){
		scanf("%d",&a[i]);
	}
	dfs(0,0,0);
	printf("%d",sum);
	return 0;
}
