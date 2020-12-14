# include <stdio.h>

int main(void){
	int n;
	double sum = 0,sam = 0,end = 0;
	scanf("%d",&n);
	if(n&1){
		if(n>1){
		for(int i = 1;i<(n+1)/2;++i){
			sum += 1/(1+((2*i)-1));
		}
		for(int j = 0;j<(n+1)/2-1;++j){
			sam = 1/(1+(2*j-1));
		}
		end = 1+sum-sam;
	}
		else
			end = 1;
}
	else{
		for(int i = 1;i<n/2-1;++i){
			sum += 1/(1+((2*i)-1));
		}
		for(int j = 0;j<n/2-1;++j){
			sam = 1/(1+(2*j-1));
		}
		end = 1+sum-sam;
	}
	printf("%0.8lf",4*end);
	return 0;
}
