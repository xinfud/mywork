# include <stdio.h>

int main(void)
{
	int a = 0;
	int num = 0;
	printf("������һ��������");
	scanf("%d",&num);
	for(int i = 2;i<num;++i)
	    if(num%i == 0)
	    ++a;
    if(a == 0)
        printf("%d��������\n",num);
    else
	    printf("%d����������\n",num);    
	return 0;
 } 
