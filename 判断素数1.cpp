# include <stdio.h>

int main(void)
{
	int i,j;
	int count = 0;
	for(i = 101;i<=200;++i)
	{
		for(j = 2;j<i;++j)
		{
			if(i%j == 0)
			    break;
		}
		if(j==i)
		{
			count++;
			printf("%-10d",i);
			if(count % 5 ==0)
			    printf("\n");
		}
	 } 
	return 0;
}
