# include <stdio.h>
static const int begin = 0;
static const int up = 1;
static const int down = 2;
int main(void){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i < n;++i)
	    scanf("%d",&a[i]);
	int state = begin;
	int max = 1;
	for(int i = 1;i < n;++i){
		switch(state){
			case begin:
				if(a[i - 1] < a[i]){
					state = up;
					max++;
					}
				else if(a[i -1] > a[i]){
				    state = down;
				    max++;
			        }
				break;
			case up:
				if(a[i - 1] > a[i]){
					state = down;
					max++;
				}
				break;
			case down:
				if(a[i - 1] < a[i]){
					state = up;
					max++;
				}
				break;
		}
	}
	printf("%d\n",max);
	return 0;
} 
