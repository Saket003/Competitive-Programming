#include <stdio.h>
#include <stdlib.h>

int main(){
    int t,n,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if (n==0) exit(0);
        int sum;
        int x,y;
        scanf("%d",&x);
        scanf("%d",&y);
        int xmax,xmin,ymax,ymin;
        xmax = xmin = x;
        ymax = ymin = y;
        while(--n){
            scanf("%d",&x);
            scanf("%d",&y);
            if(x>xmax) xmax = x;
            else if(x<xmin) xmin = x;
            if(y>ymax) ymax = y;
            else if(y<ymin) ymin = y;
        }
        sum = sum + 2*(((xmax>0)?xmax:0) + ((ymax>0)?ymax:0) + ((xmin<0)?-xmin:0) + ((ymin<0)?-ymin:0));
        printf("%d\n",sum);
        sum = 0;
    }
}