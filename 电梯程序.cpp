# include <stdio.h>

int main(void)
{
	int val;
	printf("请输入您要进入的楼层；");
	scanf("%d",&val);
	
	switch(val)
	{
		case 1 :
			printf("1层开\n");
			break;
		case 2 :
		    printf("2层开\n");
		    break;
	    default :
		    printf("3层开\n");
		    break;
	}
    return 0	
}
