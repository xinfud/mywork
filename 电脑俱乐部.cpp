# include <stdio.h>

int main(void)
{
	int a,b,c,min;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		min = a;
		if(min<c)
		{
			min = min;
		}
		else
		min = c;
	}
	else if(a>b)
	{
		min = b;
		if(min<c)
		    min = min;
		else
		    min = c; 
	}
	printf("min = %d",min);
	return 0;
}
