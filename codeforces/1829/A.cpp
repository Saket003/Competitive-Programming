#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve()
{
    char temp;
    string B = "codeforces";
    ll sum = 0;
    for(int i=0;i<10;i++){
        cin >> temp;
        if(B[i]!=temp)
            sum++;
    }

    cout << sum << endl;
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