# include <stdio.h>
# include <malloc.h>

void f()
{
}
int main(void)
{
	int * p = (int *)malloc(sizeof(int));
	*p =10;
	printf("*p = %d",*p);
	return 0;
}
