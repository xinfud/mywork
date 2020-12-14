# include <stdio.h>
void chr(){
	extern int i;
	printf("%d",i);
}
int i  = 10;
int main(void){
	chr();
	return 0;
}
