# include <stdio.h>
# include <math.h>

int isprime(double n){
	double s = sqrt(n);
	int a = (int)s;
	for(int i = 2;i<=a;++i)
		if((int)n%i==0)
			return 0;
	return 1;
}
int rule(int left,int already_sum,int *x,int start,int end){
	if(left == 0)
		return isprime(already_sum);
	int sum = 0;
		for(int i = start;i <= end;i++){
			sum += rule(left-1,already_sum+x[i],x,i+1,end);
		}
		return sum;
}
int main(void){
	int n,k;
	scanf("%d %d",&n,&k);
	int x[n];
	for(int i = 0;i<n;++i)
		scanf("%d",&x[i]);
	printf("%d",rule(n,0,x,0,n-1));
	return 0;
}
