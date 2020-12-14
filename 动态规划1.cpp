# include <stdio.h>

int opt(int arr[],int i){
	int A,B,prev[] = {0,0,0,1,0,2,3,5};
	if(i == 0)
	    return 0;
	else
	    A = arr[i - 1] + opt(arr,prev[i - 1]);
	    B = opt(arr,i - 1);
	    return A>B?A:B;
}
int main(void){
	int end,arr[] = {5,1,8,4,6,3,2,4};
	end = opt(arr,8);
	printf("%d",end);
	return 0;
}
