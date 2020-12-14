# include <stdio.h>
# include <stdlib.h>
#include<stdbool.h>
int cam(const void*a,const void*b){
	return *(int*)a-*(int*)b;
}
_Bool mmm(int k,int *d,int n){
		for(int j = 0;j<n;++j){
			if(k == d[j])
			return true;
		}
	return false;
}
int main(void){
	int n,f = 0;
	scanf("%d",&n);
	int a[n],c[n] = {0},d[n];
	_Bool l;
	for(int w = 0;w<n;++w){
		d[w] = -1;
	}
	for(int i = 0;i<n;++i){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i<n;++i){
		for(int j = i+1;j<n;++j){
			if(a[i] == a[j]){
				d[i] = j;
			    c[i]++;
			    f++;
		}
		}
		}
	qsort(c,n,sizeof(int),cam);
	
	for(int k = 0;k<n;++k){
	l = mmm(k,d,n);
	if(l);
	else{
		printf("%d\n",c[k]);
	}	
	}
	return 0;
}
