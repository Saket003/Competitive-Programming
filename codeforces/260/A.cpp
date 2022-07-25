#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool check_div(int n,int arr[],int b,int i){
    long long int x;
    x = 0;
    for(int j=0;j<i+1;j++){
        x = x*10 + arr[j];
        x = x%b;
    }
    return ((x%b)==0)?true:false;
}
//reduce space needed for x

bool recurse(int b,int i,int arr[], int n){
    if(i>n){
        for(int j=0;j<n+1;j++)
            printf("%d",arr[j]);
        exit(0);
    }
    int copy[i+1];
    for(int j=0;j<i+1;j++)
        copy[j] = arr[j];
    
    for(int j=0;j<10;j++){
        copy[i] = j;
        if(check_div(n,copy,b,i) && j==0){
            arr[i] = j;
            for(int k=i+1;k<n+1;k++)
                arr[k] = 0;
            for(int j=0;j<n+1;j++)
                printf("%d",arr[j]);
            exit(0);
        }
        if(check_div(n,copy,b,i)){
            arr[i] = j;
            recurse(b,i+1,arr,n);
        }
    }
    return false;
}

int main(){
    int a,b,n;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&n);
    int arr[n+1];
    arr[0] = a;
    for(int i=1;i<n+1;i++)
        arr[i]=-1;
    bool c;
    c = recurse(b,1,arr,n);
    //do cases -1 print
    printf("-1");
}