#include <stdio.h>

int main(){
    int dum,a,b;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            scanf("%d",&dum);
            if(dum == 1){
                a = i - 3;
                b = j - 3;
            }
        }
    }
    printf("%d",(((a>0)?a:-a) + ((b>0)?b:-b)));
}