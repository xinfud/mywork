# include <stdio.h>

int main(void){
	int t;
	scanf("%d",&t);
	int a,b,c,sum[t];
	for(int i = 0;i < t; ++i){
		scanf("%d %d %d",&a,&b,&c);
		if((a < b && b < c) || (a > b && b>c))
			sum[i] = (a + b + c) / 3;
		else if(a == c && b > a)
			sum[i] = (a + b) / 2;
		else if(a == c && a > b)
			sum[i] = a;
		else if(a == c && a == b)
			sum[i] = b;
		else
			sum[i] = (a + b + c) / 3;
	}
	for(int j = 0;j < t;++j)
	printf("%d\n",sum[j]);
	return 0;
}
