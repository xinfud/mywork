# include <stdio.h>
# include <malloc.h>

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
	int i,j;
	struct Student t;
	printf("请输入学生的个数：\n");
	printf("len = ");
	scanf("%d",&len);
	pArr = (struct Student *)malloc(len * sizeof(struct Student));
	
	for(i = 0;i<len;++i)
	{
		printf("请输入第%d个学生的信息：",i+1);
		printf("age = ");
		scanf("%d",&pArr[i].age);
		
		printf("nume = ");
		scanf("%s",pArr[i].name);
		
		printf("score = ");
		scanf("%f",&pArr[i].score);
	}
	
	for(i = 0;i<len-1;++i)
	{
		for(j = 0;j<len-1-i;++j)
		{
			if(pArr[j].score>pArr[j+1].score)
			{
				t = pArr[j];
				pArr[j] = pArr[j+1];
				pArr[j+1] = t;
			}
		}
	}
	printf("\n\n学生的信息是：\n");
	//输出
	 for(i = 0;i<len;++i)
	{
		printf("第%d个学生的信息是：\n",i+1);
		printf("年龄：%d\n",pArr[i].age);
		printf("姓名: %s\n",*(&pArr[i].name));
		printf("成绩：%f\n",pArr[i].score);
	}
	return 0;
}
