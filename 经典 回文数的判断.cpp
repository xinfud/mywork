# include <stdio.h>

int main(void)
{
	int val;
	int m;
	int sum = 0;
	int i;
	for(i = 0;i < 50;++i)
	{
	printf("please input you need prove num:");
	scanf("%d",&val);
	m = val;
	while(m)
	{
		sum = sum * 10 + m%10;
		m/= 10; 
	}
	if(val == sum)
	  printf("yes\n");
	else
	  printf("no\n");
	  }
	return 0;
}
