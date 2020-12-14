# include <stdio.h>
int a[101],n;
void sort1(int left,int right){
	int i,j,t,temp;
	if(left>right){
		return;
	}
	temp = a[left];
	i = left;
	j = right;
	while(i != j){
		while(a[j]>=temp && i<j){
			j--;
		}
		while(a[i]<=temp && i<j)
			i++;
		if(i<j){
			t = a[i];
			a[i] = a[j];
			a[j] = a[i];
		}
	}
	a[left] = a[i];
	a[i] = temp;
	sort1(left,i-1);
	sort1(i+1,right);
}
int main(void){
	int i,j,t;
	scanf("%d",&n);
	for(i = 1;i<=n;++i){
		scanf("%d",&a[i]);
	}
	sort1(1,n);
	for(i = 1;i <= n;++i){
		printf("%d",a[i]);
	}
	return 0;
}
