#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    int copy = t;
    int n;
    while(copy--){
        scanf("%d",&n);
        int numf[n];
        for(int i=0;i<n;i++)
            scanf("%d",&numf[i]);
        for(int i=0;i<n;i++){
            int cnt;
            scanf("%d",&cnt);
            char ch,chnull;
            scanf("%c",&chnull);
            for(int j=0;j<cnt;j++){
                scanf("%c",&ch);
                if(ch=='D')
                    numf[i] = numf[i]+1;
                if(ch=='U')
                    numf[i] = numf[i]-1;
            }
        }
        for(int k=0;k<n;k++)
            printf("%d ",((10+numf[k])%10));
        printf("\n");
    }
}