# include <stdio.h>

int opt(int arr[],int i){
	int A,B;
	if(i == 1)
	    return arr[0];
	else if(i == 2)
	    return arr[0]>arr[1]?arr[0]:arr[1];
	else
	    A = opt(arr,i - 2) + arr[i - 1];
	    B = opt(arr,i - 1);
	    return A>B?A:B;
}
int main(void){
	int max,arr[] = {1,2,4,1,7,8,3};
	max = opt(arr,7);
	printf("%d",max);
	return 0;
}
