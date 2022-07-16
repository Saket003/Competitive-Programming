//Alternate using count() in python

#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    int copy = t;
    int len, count, balloons;
    while(copy--){
        balloons = 0;
        scanf("%d",&len);
        char s[len];
        scanf("%s",&s);
        for(int i=65;i<91;i++){
            for(int j=0;j<len;j++){
                if((int)s[j]==i)
                    count++;
            }
            if(count>0){
                balloons = balloons + count + 1;
                count= 0;
            }
        }
        printf("%d\n",balloons);
    }
}