#include <stdio.h>

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n%2==0){
            for(int i=1;i<=n;i++){
                if(i%2==1) printf("%d ",i+1);
                else printf("%d ",i-1);
            }
        printf("\n");
        }
        else{
            printf("1 ");
            for(int i=2;i<=n;i++){
                if(i%2==1) printf("%d ",i-1);
                else printf("%d ",i+1);
            }
        printf("\n");
        }
    }


}