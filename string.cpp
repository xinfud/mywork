# include <bits/stdc++.h>
using namespace std;
 
string a[30]; 
int main(void){
	for(int i = 0;i<2;++i){
		scanf("%d",&a[i]);
}
	if(a[0]+a[1] > a[1]+a[0])
		printf("%s",a[1]);
	return 0;
}
