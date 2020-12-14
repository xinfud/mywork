# include <stdio.h>
void qsort(int a[],int l,int len){

		if(l<len){
	int i = l,j = len,x;
	x = a[i];
	while(i<j){
		while(i<j && a[j]>=x)
		    j--;
		if(i<j)
		    a[i++] = a[j];
		while(i<j && a[i]<=x)
		    i++;
		if(i<j)
		    a[j--] = a[i];
	}
	a[i] = x;
	qsort(a,i+1,len);
	qsort(a,l,i-1);
}}
int main(void){
	int i = 0;
	int a[5] = {1,4,3,5,2};
	qsort(a,0,4);
	for(i = 0;i<5;++i)
	    printf("%-5d",a[i]);
	return 0;
}
