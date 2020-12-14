# include<stdio.h>

int main(void)
{
	int a,b,c,min;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b) 
	min = b;
	else
	min = a;
	if(min>c)
	min = c;
	else
	min = min; 
	printf("min = %d",min);
	return 0;
 } 
