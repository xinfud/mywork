# include <stdio.h>
# include <stdlib.h>
int max (int a,int b){
	return a>b?a:b;
}
int my(char *a,char *b){

	int sum = 0,sam = 0,i = 0,s = 0,max1;
	while(*a != '\0'){ 
		a++;
		sum++;
	}
	while(*b != '\0'){
		b++;
		sam++;
	}
	if(sam == sum){
		for(i = 0;i<sam;++i){
			if(a[i] != b[i]){
				printf("unequal");
				break;
			}
			else{
				s++;
			}
			}
		if(s == sum){
			printf("equal");
		}
		}
	else{
		max1 = max(sam,sum);
		printf("%d",max1);
	}
	return 0; 
	}
	

int main(void){
	char a[101],b[101];
	scanf("%s",a);
	scanf("%s",b);	
	my(&a[0],&b[0]);
	return 0;
}
