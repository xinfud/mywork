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
	printf("����������Ҫ�ҵ������ܺ�\n");
	int end,i,n,key;
	scanf("%d",&n);
	int list[n];
	printf("����С������������ҵ����ļ���\n");
	for(i = 0;i<n;++i)
	    {
	    	scanf("%d",&list[i]);
		}
	printf("������������Ҫ�����\n");
	scanf("%d",&key);
	end = find(key,n,list);
	if(!end)
	    printf("������������������������\n");
	else
	    printf("������������±���%d\n",end-1);
	for(i = end-1;i<n;++i)
	{
		if(list[end-1] != list[i + 1])
		{
			printf("��һ�ͬ������±�Ϊ%d\n",i+1);
			return 0;
		}
	}
	return 0;
 }

