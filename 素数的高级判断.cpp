# include <stdio.h>

int main(void)
{
	int number;
	printf("������һ��������");
	scanf("%d",&number);
	if(number&1)
	    printf("%d ��������",number);
	else
	    printf("%d ��ż����",number);
	return 0;
 } 
