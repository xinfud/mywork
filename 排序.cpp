# include <stdio.h>

int main(void)
{
	int i,j,k,m;
	printf("请输入你需要判断数的个数：\n");
        scanf("%d",&m);
    int a[m];
    printf("请输入你需要判断的数：\n");
    for(i = 0;i<m;++i)
        scanf("%d",&a[i]);
    for(i =0 ;i<m-1;++i)
        for(j = 0;j<m-i-1;++j)
        if(a[j]>a[j+1])
        {
        	k = a[j];
        	a[j] = a[j+1];
        	a[j+1] = k;
		}
		for(i = 0;i<m;++i)
		    printf("%-10d",a[i]);
	return 0;
}
