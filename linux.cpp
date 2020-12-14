# include <stdio.h>

int find(int key,int len,int * list)
{
	int min = 0,mid,high = len-1;
	while(min<=high)
	{
		mid = (min + high)/2;
		if(list[mid]<key)
		    min = mid +1;
		else if(list[mid] == key)
		    return mid + 1;
		else 
		    high = mid - 1;
	}
	return 0;
}
int main(void)
{
	printf("请输入你需要找的数的总和\n");
	int end,i,n,key;
	scanf("%d",&n);
	int list[n];
	printf("请由小到大的输入你找的数的集合\n");
	for(i = 0;i<n;++i)
	    {
	    	scanf("%d",&list[i]);
		}
	printf("请输入你所需要求得数\n");
	scanf("%d",&key);
	end = find(key,n,list);
	if(!end)
	    printf("你输入的数不在你的数集合中\n");
	else
	    printf("你输入的数的下标是%d\n",end-1);
	for(i = end-1;i<n;++i)
	{
		if(list[end-1] != list[i + 1])
		{
			printf("下一项不同的项的下标为%d\n",i+1);
			return 0;
		}
	}
	return 0;
 }

