# include <stdio.h>
//int* add() 
int main(void){
	int n,len_a;
	scanf("%d",&n);
	int a[1100] = {0};
	 for(int i=1;i<=n;i++){ //计算i的阶乘，已经算好了i-1的阶乘
        len_a=0; //i的长度
        int p=i;
        while(p>0){ //把i存进a数组
            a[len_a++] = a[len_a]*p;
            p/=10;
        }
    }
    for(int i = 0;i<1100;++i)
    {
    	if(a[i] == 0)
    	;
    	else{
    		printf("%d",a[i]);
		}
	}
	return 0;
}
