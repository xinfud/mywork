# include <stdio.h>
//int* add() 
int main(void){
	int n,len_a;
	scanf("%d",&n);
	int a[1100] = {0};
	 for(int i=1;i<=n;i++){ //����i�Ľ׳ˣ��Ѿ������i-1�Ľ׳�
        len_a=0; //i�ĳ���
        int p=i;
        while(p>0){ //��i���a����
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
