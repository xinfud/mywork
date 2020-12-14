# include <stdio.h>
# include <string.h>

char a[10000],b[10000],c[10000];
int main(void){
	scanf("%s %s",a,b);
	int len1 = strlen(a);
	int len2 = strlen(b);
	for(int i = 0;i < len1;++i){
		a[10000-len1+i] = a[i];
		a[i] = '0';
	}
	for(int j = 0;j < len2;++j){
		b[10000-len2+j] = b[j];
		b[j] = '0';
	}
	int max = (len1>len2)?len1:len2;
	int s = 0;
	for(int i = 0;i< max;i++){
		c[10000-1-i] = ((a[10000-1-i]-'0')+(b[10000-1-i]-'0')+s)%10 + '0';
		s = ((a[10000-1-i]-'0')+(b[10000-1-i]-'0')+s)/10;
	}
	c[10000-1-max] = s + '0';
	int m = 0;
	while(c[m] == '\0' || c[m] == '0'){
		m++;
	}
	for(int i = m;i<10000;++i){
		printf("%c",c[i]);
	}
	return 0;
} 
