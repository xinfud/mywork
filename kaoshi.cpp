# include <stdio.h>

int main(void){
	int m,t,n,s,r,k,chu = 0,sum = 100;
	scanf("%d",&m);
	for(int i = 0;i < m;++i){
		scanf("%d %d %d %d",&t,&n,&s,&r,&k);
			for(int i = 1;i <= 5 * 60 /r;++i){
				if(i % t == 0){
					if(i / t == 5){
						sum -= 3 * n / 2;
						chu += s;
					}
				    else{
					
						sum -= n;
						chu += s;}
				}
				if(i % 5 == 0){
					chu += r;
				}
				if(chu > 60)
				    break;
				else if(sum == 0)
				    break;
			}
			if(chu > 60)
		    	printf("�����˲�����£�������Ӯ��");
		    else
		        printf("����û���䣬����Ӯ��");
		}
	

	return 0;
}

