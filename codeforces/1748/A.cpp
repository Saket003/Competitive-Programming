#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if(n%2==0)
        n = n/2;
    else
        n=(n/2)+1;
    cout << n << endl;
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