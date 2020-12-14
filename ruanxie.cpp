# include <stdio.h>

int main(void)
{
	int a,b,c,d,e;
	printf("请输入一个1到2019的自然数：\n");
	scanf("%d",&a);
	if(a == 1)
	    printf("你输入的数与分母2020互质。\n");
	else
	    for(b = 2,c = 0;b<=a;++b)
	    {
	        if(0 == a%b && 0 == 2020%b)
	            c = 1;
	    }
	if(c == 1)
	    printf("你输入的数与分母2020不互质。\n");
	else
	    printf("你输入的数与分母2020互质。\n") ;        
	return 0;
}
