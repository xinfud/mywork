# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int cam(const void *a,const void *b){
	return *(int *)a - *(int *)b;
}
int main(void){
	srand((unsigned)time(NULL));
	int n = 10,i;
	int a[n];
	for ( i = 0;i<n;++i){
		a[i] = rand() % 10;
	}
	qsort(a,n,sizeof(int),cam);
	for(i = 0;i<n;++i){
		printf("%-5d",a[i]);
	}
}
