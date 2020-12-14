# include <stdio.h>

int main(void)
{
	int i,j,k,a[10];
	for(i = 0;i<10;++i)
	    scanf("%d",&a[i]);
	for(i = 0,j = 9;i<5;++i,--j)
    {
    	k = a[i];
    	a[i] = a[j];
    	a[j] = k;
	}
	for(i = 0;i<10;++i)
	    printf("%d\n",a[i]);
	return 0;
}
