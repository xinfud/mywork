# include <stdio.h>

int main(void){
	int i,j,k;
	printf("�1�7�1�7�1�7�1�7�1�7�1�7�1�7�1�7�0�8�1�7�1�7�1�7�1�7�0�5�1�7�1�7�1�7�1�7�1�7�1�7�1�7�1�7�1�7\n");
	scanf("%d",&i);
	for(int c = 0;c < i;++c){
		for(j = 0;j < i -1;++j){
			printf(" ");
		}
	for(int t = 0;t < c * 2 + 1;++t){
	/*	if(t == i){
			printf("*");
			}
		else if(t == 0 || t == (c + 1) * 2 - 1)
		    printf("*");
		else
		    printf(" ");
		printf("\n");*/
		printf("*");
	}
	printf("\n");
	}
	return 0;	
}
