# include <stdio.h>
int fei(int x){
	int a,b,sum,c,t;
	if(x == 2 || x == 1)
	    printf("%d",1);
	else
	{
	    for(a = 3,b = 1,t = 1;a<x;++a)
	    {
		    c = b + t;
			b = t;
			t = c;	
	    }
	    sum = t+b;
	
    }
    return sum;
}
int main(void)
{
	int a,b,x,t,c;
	long sum;
	//printf("����������Ҫ���ķ䷿���(����Ϊ���ڵ���1����Ȼ��)��\n");
	//scanf("%d",&x);
	/*if(x == 2 || x == 1)
	    printf("%d",1);
	else
	{
	    for(a = 3,b = 1,t = 1;a<x;++a)
	    {
		    c = b + t;
			b = t;
			t = c;	
	    }
	    sum = t+b;
    }*/
	
    for(int i = 0;i<100;++i){
    	sum += fei(i);
	}
	printf("%ld",sum);
	return 0;
 } 
