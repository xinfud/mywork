# include <stdio.h>

int opt(int arr[]){
	int A,B,op[7] = {0};
	op[0] = arr[0];
	op[1] = arr[0]>arr[1]?arr[0]:arr[1];
	for(int i = 2;i < 7;++i){
		A = op[i - 2] + arr[i];
		B = op[i - 1];
		op[i] = A>B?A:B;
	}
	return op[6];
}
int main(void){
	int end,arr[] = {1,2,4,1,7,8,3};
	end = opt(arr);
	printf("%d",end);
}
