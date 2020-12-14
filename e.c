# include <stdio.h>

int main(void)
{
	int year;
	float yearmin = 3.156e+007;
	printf("请输入你的年龄 输出结果为你生活的秒数");
	scanf("%d",&year);
	printf("你生活的秒数为:%f",yearmin*year);
	return 0;
}
