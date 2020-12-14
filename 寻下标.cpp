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
	printf("��������С�����15��������\n");
	for(i = 1;i<=15;++i)
	{
		scanf("%d",&b[i-1]);
		printf("\n");
	}
	printf("��������Ҫ���ҵ�����\n");
	scanf("%d",&key);
	if(!search(a,key))
	    printf("��Ҫ���ҵ�������Ŀ��������!\n");
	else
	    printf("��Ҫ���ҵ������±�Ϊ%d\n",search(a,key)-1);
	return 0;
}
