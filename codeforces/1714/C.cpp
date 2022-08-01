#include <stdio.h>

int main(){
    int t,s;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&s);
        if(s<=9){
            printf("%d\n",s);
            continue;
        }
        if(10<=s && s<=17){
            printf("%d9\n",(s-9));
            continue;
        }
        if(18<=s && s<=24){
            printf("%d89\n",(s-17));
            continue;
        }
        if(25<=s && s<=30){
            printf("%d789\n",(s-24));
            continue;
        }
        if(31<=s && s<=35){
            printf("%d6789\n",(s-30));
            continue;
        }
        if(36<=s && s<=39){
            printf("%d56789\n",(s-35));
            continue;
        }
        if(40<=s && s<=42){
            printf("%d456789\n",(s-39));
            continue;
        }
        if(43<=s && s<=44){
            printf("%d3456789\n",(s-42));
            continue;
        }
        printf("123456789\n");
    }
}