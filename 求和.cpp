# include <stdio.h>
int main (void)
{
	int n,year,i,j;
	scanf("%d",&n);
	int a[n];
	for( i = 0;i < n;++i){
		scanf("%d",&a[i]);
	}
	for(int j = 0;j < n;++j)
	if(a[j] % 400 == 0 || (a[j] % 4 == 0 && a[j] % 100 != 0))
        printf("yes\n");
    else
        printf("no\n");
	return 0;	
}

