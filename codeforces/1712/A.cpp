#include <stdio.h>
#include <set>
using namespace std;

int main(){
    int t,n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        set<int> a;
        int m,count;
        count = 0;
        //int b[k];
        //for(int i=1;i<k+1;i++) b[i]=i;
        for(int i=0;i<k;i++){
            scanf("%d",&m);
            a.insert(m);
        }
        for(int i=0;i<n-k;i++){
            scanf("%d",&m);
        }
        for (int i=1;i<k+1;i++){
            count = count + 1 - a.count(i);
        }
        printf("%d\n",count);
    }


}