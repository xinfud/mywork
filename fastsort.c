# include <stdio.h>
void sort1(int* a,int min,int max){
    int strat,temp,end,t;
	if(min > max)
		return;
	strat = min;
	end = max;
	temp = a[min];
    while(strat < end){
        while(a[end] >= temp && end > strat){
            end--;
        }   
        while(a[strat] <= temp && strat < end){
            strat++;
        }
        if(strat < end){
       		t = a[strat];
        	a[end] = t;
        }
    }
    a[min] = a[strat];
    a[strat] = temp;
    sort1(a,min,strat - 1);
    sort1(a,strat + 1,max);
}
int main(void){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    sort1(a,0,n - 1);
    for(i = 0;i < n;++i){
    	printf("%d  ",a[i]);
	}
    return 0;
}/*总是从后面开始 先找 如果后面先找到 前面的与后面的相遇 该 前面的下标的值一定小于
基数的值  如果 假如前面先找到 则此时后面已经找到  要不两数互换 要不就是情况one
*/ 
