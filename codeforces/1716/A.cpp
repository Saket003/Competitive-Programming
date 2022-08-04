#include <stdio.h>

int main(){

    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n%3==0)
            printf("%d\n",(n/3));
        else if (n==-1 || n==1)
            printf("2\n");
        else
            printf("%d\n",(n/3)+1);
    }
}