#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);
    int n,H,M,h,m;
    while(t--){
        scanf("%d",&n);
        scanf("%d",&H);
        scanf("%d",&M);
        int ho,mo,diff;
        int min =10000000;
        for(int i=0;i<n;i++){
            scanf("%d",&h);
            scanf("%d",&m);
            if((h<H)||(h==H && m<M))
                h = 24+h;
            diff = (h-H)*60 + (m-M);
            if(min>diff){
                min = diff;
                ho = h-H;
                mo = m-M;
                if(mo<0){
                    ho = ho-1;
                    mo = mo+60;
                }
            }
        }
        printf("%d ",ho);
        printf("%d\n",mo);
    }

}