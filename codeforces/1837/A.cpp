#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define vi vector<int>
#define pi pair<int,int>

#define floop(i,n,c) for(ll i=0;i<n;i=i+c)

const double e = 1e-9; //Check not exact 1, Use with abs() for floating point numbers instead of ==
const int MAX_N = 1e5 + 5; //Check use?
const ll MOD = 1e9 + 7;

void solve()
{
    ll n,k;
    cin >> n >> k;
    if(n%k==0){
        cout << 2 << endl << n+1 << " " << -1 << endl;
    }
    else{
        cout << 1 << endl << n << endl;
    }
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