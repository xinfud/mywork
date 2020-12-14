# include <stdio.h>

int main(void){
	int i,j,ans = 0;
	char sum[1000][1000] = {'\0'};
	for(i = 0;i<1000;i++){
		scanf("%s",sum[i]);
		if(sum[i][0] == '.')
			break;
	}
	for(j = 0;j<1000;++j){
		for(i = 0;i<1000;++i){
			if(sum[j][i] == 'a')
				ans++;
		}
	}
	printf("%d",ans);
	return 0;
} 
