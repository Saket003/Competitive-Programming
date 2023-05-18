#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long int A[n],B[n];
    for(int i=0;i<n;i++)
        cin >> A[i];
    for(int i=0;i<n;i++)
        cin >> B[i];
    sort(A,A+n,greater<int>());
    sort(B,B+n,greater<int>());

    int A_in, B_in;
    A_in=0;
    long long int prod = 1;
    for(B_in=0;B_in<n;B_in++){
        for(;A_in<n;A_in++){
            if(B[B_in]>=A[A_in])
                break;
        }
        prod = (prod*(A_in-B_in))%int(1e9+7);
    }
    cout << prod%int(1e9+7) << endl;
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