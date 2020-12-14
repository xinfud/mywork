# include <stdio.h>

int main(void)
{
	int i,j,k,a[10];
	for(i = 0;i<10;++i)
		scanf("%d",&a[i]);
	for(i = 0;i<10;++i)
	    if(a[i]>a[i+1])
		{
			j = a[i];
			a[i] = a[i+1];
			a[i+1] = j;
		}
	printf("十个数中的最大数为：");
	printf("a[9] = %d",a[9]);
	return 0;
 } 
