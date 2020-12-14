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
	
	printf("请输入学生的个数：\n");
	printf("len = ");
	scanf("%d",&len);
	pArr = (struct Student *)malloc(len * sizeof(struct Student ));
	for(i = 0;i<len;++i)
	{
		printf("请输入第%d个学生的信息：",i + 1);
		printf("age = ");	
	}
	
	return 0;
}
