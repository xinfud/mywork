# include <stdio.h>

int main(void)
{
	int i,j,k,a[10];
	printf("������10������\n");
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
	printf("�źõ�����˳��Ϊ��\n");
	for(i = 0;i<10;++i)
	    printf("%d\n",a[i]);
	return 0;
 } 
