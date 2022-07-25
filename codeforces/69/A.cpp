#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int x,y,z,xi,yi,zi;
    x = y = z = 0;
    while(n--){
        scanf("%d %d %d",&xi,&yi,&zi);
        x = x + xi;
        y = y + yi;
        z = z + zi;
    }
    if( x==0 && y==0 && z==0)
        printf("YES");
    else
        printf("NO");
}