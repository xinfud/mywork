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
	printf("������һ���\n");
	scanf("%d",&n);
	int sum;
	sum = fibonacci(n);
	printf("����������Ľ��Ϊ��\n");
	printf("sum = %ld",sum);
	return 0;
}
