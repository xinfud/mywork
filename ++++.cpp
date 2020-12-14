# include <stdio.h>
# include <string.h>

char a[10000],b[10000],c[10000];
int main(void){
	scanf("%s",a);
	scanf("%s",b);
	int len1 = strlen(a);
	int len2 = strlen(b);
	for(int i = 0;i<10000;++i){
		c[i] = '\0';
	}
	for(int i = 0;i < len1;++i){
		a[10000-len1+i] = a[i];
	}
	for(int j = 0;j < len2;++j){
		b[10000-len2+j] = b[j];
	}
	for(int i = 0;i <10000 - len1;i++){
		a[i] = '0';
	}
	for(int i = 0;i <10000 - len2;i++){
		b[i] = '0';
	}
	int max = (len1>len2)?len1:len2;
	int s = 0;
	for(int i = 0;i< max;i++){
		c[10000-1-i] = ((a[10000-1-i]-'0')+(b[10000-1-i]-'0')+s)%10 +'0';
		s = ((a[10000-1-i]-'0')+(b[10000-1-i]-'0')+s)/10;
	}
	c[10000-1-max] = s + '0';
	if(c[10000-1-max] == '0')
		c[10000-1-max] = '\0';
	int m = 0;
	while(c[m] == '\0'){
		m++;
	}
	for(int i = m;i<10000;++i){
		printf("%c",c[i]);
	}
	return 0;
} 
