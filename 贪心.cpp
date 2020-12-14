# include <stdio.h>
# include <stdlib.h>
int cam(const void* a,const void* b){
	return *(int*)a - *(int*)b;
}

int main(void){
	int child = 0,cookie = 0,g[5] = {5,9,4,6,3};
	int f[5] = {6,8,7,2,1};
	qsort(g,5,sizeof(int),cam);
	qsort(f,5,sizeof(int),cam);
	while(child < 5 && cookie < 5){
		if(g[child] <= f[cookie]){
			child++;
		}
		cookie++;
	}
	printf("%d",child);
	return 0;
} 
