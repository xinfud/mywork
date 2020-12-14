# include <stdio.h>
bool subset(int arr[],int i,int s){
	int A,B;
	if(s == 0){
		return true;
	}
	else if(i == 0){
		if(arr[0] == s)
		    return true;
		else
		    return false;
	}
	else if(arr[i] > s)
	    return subset(arr,i - 1,s);
	else
	    A = subset(arr,i - 1,s - arr[i]);
	    B = subset(arr,i-1,s);
	    if(A == true || B == true)
	        return true;
	    else
	        return false;
}
int main(void){
	int s,arr[] = {3,34,4,12,5,2};
	printf("请输入你需要求解数\n");
	scanf("%d",&s);
	if(subset(arr,5,s))
	     printf("true");
    else
        printf("false");
	
	return 0;
} 
