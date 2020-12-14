# include <stdio.h>
long fibonacci(int n)
{
	if(n>2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    else
        return 1;
}
int main(void)
{
	int n;
	printf("请输入一个项：\n");
	scanf("%d",&n);
	int sum;
	sum = fibonacci(n);
	printf("你所输入项的结果为：\n");
	printf("sum = %ld",sum);
	return 0;
}
