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
    ll n;
    cin >> n;


    ll A[49];
    floop(i,49,1){
        A[i] = 0;
    }
    string s;
    cin >> s;

    int n1,n2;
    floop(i,n-1,1){
        n1 = int(s[i]) - 97;
        n2 = int(s[i+1]) - 97;
        A[n1*7 + n2] = A[n1*n + n2] + 1;
    }

    ll cnt = 0;
    floop(i,49,1){
        if(A[i]!=0)
            cnt++;
    }

    cout << cnt << endl;
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