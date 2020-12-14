#include<stdio.h>

int main(void){
	int a = 2020;
	unsigned long c;
	printf("%p\n",&a);
	scanf("%lx",&c);
	scanf("%d",(int *)c);
	printf("a = %d",a);
	return 0;
}
