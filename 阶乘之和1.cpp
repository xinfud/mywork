# include <stdio.h>
# include <string.h>
int jiecheng(int n){
	int a[10000] = {1},i,j;
	int t = 0,len = 1,tem;
	for(i = 2;i<=n;++i){
		t = 0;
		for(j = 0;j < len;++j){
			tem = a[j]*i;
			a[j] = (tem + t)%10;
			t = (tem + t)/10;
			if(t!=0&&j==len-1){
				len++;
			}
		}
	}
	int sum = 0;
		for(i = len-1;i>=0;i--){
			sum = sum*10+a[i];
		}
	return sum;
} 
int main(void){
    int n,sum=0;
    scanf("%d",&n);
    if(n==0){
    	printf("%d",1);
	}
	else{
	    for(int i = 1;i <= n;++i){
	    	sum+=jiecheng(i);
		}
		printf("%d",sum);
	}
		return 0;
}
