# include <stdio.h>
# include <stdlib.h>

int cam(const void*a,const void*b){
    return *(int*)a - *(int*)b;
}
int main(void){
    int n,fruits[10000] = {0},strengh = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;++i){
    	scanf("%d",&fruits[i]);
	}
	qsort(fruits,n,sizeof(int),cam);
	
	for(int i = 0;i < n - 1;++i){
		fruits[i + 1] = fruits[i] + fruits[i + 1];
		strengh += fruits[i + 1];
		int j = i + 2,temp = fruits[i + 1];
		while(true){
			if(fruits[j] > fruits[i+1] || j > n - 1){
		        break;	
		}
		j++;
}
	for(int k = i + 1;k < j - 1;++k){
		fruits[k] =  fruits[k + 1];
	}
	fruits[j - 1] = temp;
}
    printf("strengh = %d",strengh);
    return 0;
}
