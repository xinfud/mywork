# include <stdio.h>

int main(void)
{
	int a,b,c,d,e;
	printf("������һ��1��2019����Ȼ����\n");
	scanf("%d",&a);
	if(a == 1)
	    printf("������������ĸ2020���ʡ�\n");
	else
	    for(b = 2,c = 0;b<=a;++b)
	    {
	        if(0 == a%b && 0 == 2020%b)
	            c = 1;
	    }
	if(c == 1)
	    printf("������������ĸ2020�����ʡ�\n");
	else
	    printf("������������ĸ2020���ʡ�\n") ;        
	return 0;
}
