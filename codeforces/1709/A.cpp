#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    int copy = t;
    int keyi,d1,d2,d3,newkey;
    while(copy--){
        scanf("%d",&keyi);
        int d[3];
        for(int i=0;i<3;i++)
            scanf("%d",&d[i]);
        char *st;
        st = "YES";
        if(d[keyi-1]==0)
            st = "NO";
        else{
            newkey = d[keyi-1];
            if(d[newkey-1]==0)
            st = "NO";
        }
        printf("%s\n",st);
    }
}