#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int A[n];
    int B[n][12];

    int answer;
    answer = n;

    string x;
    cin >> x;
    int temp;

    for(int i=0;i<n;i++){
        temp = int(x[i])-48;
        A[i] = temp;
        for(int j=0;j<12;j++)
            B[i][j] = 0;
        B[i][temp] = 1;
        B[i][11] = 1;
    }

    int flags = 0;
    for(int i=2;i<n+2;i++){
        flags = 0;
        for(int j=0;j<n-i+1;j++){
            if(B[j][10]<=10){
            temp = A[j+i-1];
            if(B[j][temp]==0)
                B[j][11] = B[j][11] + 1;
            B[j][temp] = B[j][temp] + 1;
            if(B[j][temp]>B[j][10])
                B[j][10] = B[j][temp];
            if(B[j][10]<=B[j][11])
                answer = answer + 1;
            }
            else
                flags+=1;
        }
        if(flags>=n-i+1)
            break;
    }
    cout << answer << endl;           
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}