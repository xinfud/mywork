# include <stdio.h>
# include <math.h>

int main(void)
{
	int a,b,d = 0,c,sum = 0;
	printf("��������Ҫת���Ķ���������\n");
	scanf("%d",&a);
	while(a != 0){
		b = a % 10;
		c = pow(2,d);
		sum = sum + b * c;
		d++;
		a /=  10;
	}
	printf("%d",sum);
	return 0;
}

