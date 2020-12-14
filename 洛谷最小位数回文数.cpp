# include <stdio.h>

int main(void){
	int n,a = 0,b = 0,sam,c,d = 1,sum = 0;
	scanf("%d",&n);
	for(int i = 0;i<31;++i){
		b = n;
		sum = 0;
		sam = 0;
	while(b){
		a = b%10;
		b /=10;
		sum = sum * 10 +a;
	}
	n += sum;
	c = n;
	while(c){
		a = c%10;
		c /= 10;
		sam = sam * 10 + a;
	}
	if(sam != n){
		d++;
	}
	else if(d >30){
		printf("Impossible");
		break;
	}
	else{
		printf("%d",d);
		break;
	}
	
}
	return 0;
} 
