# include <stdio.h>
int i;
void type1(int* b,int len,int x){
	int a[len];
	for(i = 0;i<len;++i){
		a[i] = b[i];
	}
	for(i = x-1;i < len-1;++i){
		a[i] = a[i+1];
	}
	for(i = 0;i<len - 1;++i){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void type2(int* b,int len,int x,int y){
	int s[len];
	for(i = 0;i<len;++i){
		s[i] = b[i];
	}
	for(i = len-1;i>x-1;i--){
		s[i] = s[i-1];
	}
	s[x-1] = y;
	for(i = 0;i<len;i++){
	printf("%d ",s[i]);
	}
	printf("\n");
}
void tryp3(int* b,int ans,int len,int x){
	int a[len];
	for(i = 0;i<len;++i){
		a[i] = b[i];
	}
	for(i = x;i<len-ans;++i){
		a[i] = a[i+ans];
	}
	for(i = 0;i < len-ans;++i){
	printf("%d",a[i]);
	}
	printf("\n");
}
int main(void){
	int n,q,i,m;
	scanf("%d %d",&n,&q);
	int a[n],k[q],x[q] = {0},y[q] = {0};
	for(i = 0;i<n;++i){
	scanf("%d",&a[i]);
	}
	for(i = 0;i<q;++q){
		scanf("%d",&k[i]);
		if(k[i] == 1){
			scanf("%d",&x[i]);
		}
		else if(k[i] == 2){
			scanf("%d %d",&x[i],&y[i]);
		}
		else{
			scanf("%d",&x[i]);
		}
	}
	int ans = 0;
	for(i=0;i<q;++i){
		if(k[i]==1){
			type1(a,n,x[i]);
		}
		else if(k[i] == 2){
			m = n+1;
			int s[m];
			for(i = 0;i<n;++i){
				s[i] = a[i];
			}
			type2(s,m,x[i],y[i]);
		}
		else{
			for(i = x[i];i<n;++i){
				if(a[x[i]-1] == a[i]){
					a[x[i]-1]+=a[i];
					ans++;
				}
				else{
					break;
				}
			}
			tryp3(a,ans,n,x[i]);
		}
	}
	return 0;
}
