# include <stdio.h>
# include <math.h>
int main(void)
{
	int m;//���������
    int i;//ѭ������
	int k;//m��ƽ����
	printf("������һ��������");
	scanf("%d",&m);
	k = (int)sqrt((double)m) ;//��ƽ������ע��sqrt�����Ĳ���Ϊdouble���͡�
	for(i = 2; i<=k;++i)
	    if(m%i == 0)
	      break;//���������е�ѭ����ômΪ������ע�����һ��ѭ����ִ��++i��i=k+1
	if(i>k)
	    printf("%d��������\n",m);
	else
	    printf("%d����������\n",m);
	return 0;
}
