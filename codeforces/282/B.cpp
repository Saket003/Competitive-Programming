//https://codeforces.com/problemset/problem/282/B
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n;
    scanf("%d",&n);
    int ai,gi;
    int Sag=0;//Stays between 500 and -500
    char str[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&ai,&gi);
        if(Sag + ai<500){
            Sag = Sag + ai;
            str[i] = 'A';
        }
        else{
            Sag = Sag - gi;
            str[i] = 'G';
        }
    
    }

    if(Sag<=500 && Sag>=-500){
        for(int i=0;i<n;i++)
            printf("%c",str[i]); //Check direct print
    }
    else
        printf("-1");
}