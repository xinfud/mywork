# include <stdio.h>
# include <stdlib.h>

int cam(const void *a,const void *b){
	return *(int *)a - *(int *)b;
}
int max(int a,int b){
	return a>b?a:b;
} 
int min(int a,int b){
	return a<b?a:b;
}
int main(void){
	int l,n,max1 = 0,min1 = 0;
	scanf("%d %d",&l,&n);
	int a[n];
	for(int i = 0;i < n;++i){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;++i){
		max1 = max(max1,max((l-a[i]+1),a[i]));
		min1 = max(min1,min((l-a[i]+1),a[i]));
	}
	printf("%d %d",min1,max1);
	return 0;
}
