# include <stdio.h>
void put(){
	char c;
	if((c = getchar()) != '\n'){
	if(c != '\n' ){
		put();
	}
	if(c != '\n'){
		putchar(c);
	}
	}
}
int main(void){
	put();

	return 0;
}
