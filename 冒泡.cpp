# include <stdio.h>

int main(void)
{
	int i,j,k,a[10];
	printf("请输入10个数：\n");
	for(i = 0;i<10;++i)
	    scanf("%d",&a[i]);
	for(i = 0;i<9;++i)
	    for(j = 0;j<9-i;++j)
	    {
	    	if(a[j]>a[j+1])
	    	{
	    		 k = a[j];
	    	    a[j] = a[j+1];
	    	    a[j+1] = k;
			} 
		}
	printf("排好的数的顺序为：\n");
	for(i = 0;i<10;++i)
	    printf("%d\n",a[i]);
	return 0;
 } 
