# include <stdio.h>
void zhizhen(int a[])
{
	a[0] = 5;
	return;
}
int main(void)
{
	int b;
	zhizhen(&b);
	printf("%d",b);
	return 0;
}
