# include <stdio.h>

int main(void)
{
	int flag=1,m=100,i=2; 
	for(m = 100;m<=200;++m)
	{
		flag=1; 
		for(i = 2;i<m;++i)
		
			if(m%i == 0)
			{
				flag = 0;
				i = m;
			}
			if(flag == 1)
			printf("%d\n",m);
		
		   
    }
	return 0;
}

