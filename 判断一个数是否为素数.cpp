# include <stdio.h>
# include <math.h>
int main(void)
{
	int m;//输入的整数
    int i;//循环次数
	int k;//m的平方根
	printf("请输入一个整数：");
	scanf("%d",&m);
	k = (int)sqrt((double)m) ;//求平方根，注意sqrt（）的参数为double类型。
	for(i = 2; i<=k;++i)
	    if(m%i == 0)
	      break;//如果完成所有的循环那么m为素数，注意最后一次循环会执行++i，i=k+1
	if(i>k)
	    printf("%d是素数。\n",m);
	else
	    printf("%d不是素数。\n",m);
	return 0;
}
