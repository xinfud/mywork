# include <stdio.h>

int main(void){
	int n,i = 0,j = 0,k = 1;
	scanf("%d",&n);
	int data[n][n] = {1};
	while(i != n-1 || j != n-1){
		if( k == 1){
			data[i][j+1] = data[i][j]+1;
			j += 1;
			if(i == 0){
				k = 2;
			}
			else{
				k = 4;
			}
		}
		else if(k == 2){
			data[i+1][j-1] = data[i][j]+1;
			i += 1;
			j -= 1;
			if(j == 0 && i != n-1){
				k = 3;
			}
			else if(i == n-1){
				k = 1;
			}
			else{
				k = 2;
			}
		}
		else if(k == 3){
			data[i+1][j] = data[i][j]+1;
			i += 1;
			if(j == 0){
				k = 4;
			}
			else{
				k = 2;
			}
		}
		else if(k == 4){
			data[i-1][j+1] = data[i][j]+1;
			i -= 1;
			j += 1;
			if(i == 0 && j != n-1){
				k = 1;
			}
			else if(j == n-1){
				k = 3;
			}
			else{
				k = 4;
			}
		}
	}
		for(i = 0;i<n;i++){
			for(j = 0;j<n;++j){
				printf("%-5d",data[i][j]);
			}
			printf("\n");
		}
	return 0;
}
