# include <stdio.h>
int max(int a,int b){
	return a>b?a:b;
} 
/*i(��Ʒ���)  1   2   3   4
w�������      2   3   4   5
v����ֵ��      3   4   5   6*/ 
int weight[5] = {0,2,3,4,5};
int value[5] = {0,3,4,5,6};
int dp[5][9] = {0};
int object[5];
void name(){
	for(int i = 1;i<5;++i){
		for(int j = 1;j<9;j++){
			if(weight[i] > j)
		    	dp[i][j] = dp[i-1][j];
		    else
		    	dp[i][j] = max(dp[i - 1][j],dp[i-1][j - weight[i]]+value[i]);
		}
	}
	printf("%d",dp[4][8]);
}
int main(void){
	name();
	return 0;
}
