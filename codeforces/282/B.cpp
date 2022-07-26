//https://codeforces.com/problemset/problem/282/B
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n;
    scanf("%d",&n);
    int ai[n],gi[n];
    for(int i=0;i<n;i++)
        scanf("%d %d",&ai[i],&gi[i]);

    
    int Sag=0;//Stays between 500 and -500
    //Assume true first
    char str[n];
    for(int i=0;i<n;i++){
        if(Sag + ai[i]<500){
            Sag = Sag + ai[i];
            str[i] = 'A';
        }
        else{
            Sag = Sag - gi[i];
            str[i] = 'G';
        }
    }

    if(Sag<=500 && Sag>=-500){
        for(int i=0;i<n;i++)
            printf("%c",str[i]);
    }
    else
        printf("-1");
}