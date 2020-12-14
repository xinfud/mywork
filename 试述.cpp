#include<stdio.h>
#include<stdlib.h>
int* twosum(int* nums,int numssize,int target)
{
	int* result=(int*)malloc(sizeof(int)*2);
	for(int i=0;i<numssize;i++)
	{
		for(int j=i+1;j<numssize;j++)
		{
			if(nums[i]+nums[j]==target)
			{
				result[0]=i;
				result[1]=j;
				return result;
			}
		}
	}
	return result;
}
int main()
{
	int num[4]={1,23,54,5};
	int *p = twosum(num,4,6);
	printf("%d,%d",p[0],p[1]);
	return 0;
}
