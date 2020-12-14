#include"stdio.h"
#include"string.h"
int main()
{
    int i,m,len,len1;
    char a[10000],b[10000],c[10000];
    scanf("%s",a);
    scanf("%s",b);
    len=strlen(a);
    len1=strlen(b);
	m=(len>len1)?len:len1;
    for(i=0;i<50;i++)  
    a[50-1-i]=a[len-1-i];//使其右对齐
	for(i=0;i<50-len;i++)
	a[i]='0';//前面补0
	for(i=0;i<50;i++) 
	b[50-1-i]=b[len1-1-i];//使其右对齐
	for(i=0;i<50-len1;i++)
	b[i]='0';//前面补0
	for(i=0;i<50;i++) 
	c[i]='0';//初始化0
	int s=0;//进位
	for(i=0;i<m;i++) 
	{
		c[50-1-i]=((a[50-1-i]-'0')+(b[50-1-i]-'0')+s)%10+'0';
		s=((a[50-1-i]-'0')+(b[50-1-i]-'0')+s)/10;
	} 
	c[50-1-m]=s+'0';
    int d = 0;
	while(c[d] == '0'){
		d++;
	}
	for(int i = d;i<50;++i){
		printf("%c",c[i]);
	}
	return 0;
} 

