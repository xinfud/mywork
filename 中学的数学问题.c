# include <stdio.h>

int main(void){
    int i,t,ans = 0;
    scanf("%d",&t);
    for(i = 0;i < t;++i){
        ans = 0;
        int x,n,p;
        scanf("%d %d" ,&n,&p);
        for(i = n;i>=p;--i){
             x = i;
          while(x>=p){
            if(x%p == 0){
                ans++;
                x = x/p;
            }
            else
            {
                break;
            }
            
          }
        }
          printf("%d\n",ans);
}
      return 0;
    }