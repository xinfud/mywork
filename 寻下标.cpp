# include <stdio.h>
# include <stdlib.h>

int search(int * a,int key)
{
	int low = 0,mid;
	int high = 14;
	while(low<=high)
	{
		mid = (low+high)/2;
		if(key == a[mid])
		    return mid + 1;
		else if(key<a[mid])
		    high = mid-1;
		else
		    low = mid+1;
	}
}
int main(void)
{
	int *a,key,i;
	int b[15] = {0};
	a = b;
	printf("请输入自小到大的15个整数：\n");
	for(i = 1;i<=15;++i)
	{
		scanf("%d",&b[i-1]);
		printf("\n");
	}
	printf("请输入你要查找的数：\n");
	scanf("%d",&key);
	if(!search(a,key))
	    printf("你要查找的数不在目标数组中!\n");
	else
	    printf("你要查找的数组下标为%d\n",search(a,key)-1);
	return 0;
}
