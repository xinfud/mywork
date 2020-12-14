# include <stdio.h>
char win[10000];
int main(void){
	char s;
	int w = 0,l = 0;
	scanf("%s",win);
	for(int i = 0;win[i] != 'E';++i){
		if(win[i] == 'W'){
			win[i] = 1;
		}
		else{
			win[i] = 2;
		}
	}
	for(int i = 0;i<10000;++i){
		if(win[i] == 1){
			w++;
		}
		if(win[i] == 2){
			l++;
		}
		if(win[i] == 0){
			printf("%d:%d\n",w,l);
			break;
		}
		if(w-l>=2 || l-w>=2)
			if(w>=11 || l>=11){
				printf("%d:%d\n",w,l);
				w = 0;
				l = 0;
			}
	}
	w = 0;
	l = 0;
	printf("\n");
	for(int i = 0;i<10000;++i){
		if(win[i] == 1){
			w++;
		}
		if(win[i] == 2){
			l++;
		}
		if(win[i] == 0){
			printf("%d:%d\n",w,l);
			break;
		}
		if(w-l>=2 || l-w>=2)
			if(w>=21 || l>=21){
				printf("%d:%d\n",w,l);
				w = 0;
				l = 0;
			}
		}
	return 0;
}
