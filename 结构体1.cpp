# include<stdio.h>
# include<malloc.h>

struct Student
{
	int age;
	float score;
	char name[100];
};
int main(void)
{
	int len;
	struct Student * pArr;
	int i;
	
	printf("������ѧ���ĸ�����\n");
	printf("len = ");
	scanf("%d",&len);
	pArr = (struct Student *)malloc(len * sizeof(struct Student ));
	for(i = 0;i<len;++i)
	{
		printf("�������%d��ѧ������Ϣ��",i + 1);
		printf("age = ");	
	}
	
	return 0;
}
