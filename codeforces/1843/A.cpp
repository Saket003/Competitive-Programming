#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define ld long double
#define vi vector<int>
#define pi pair<int,int>
#define zero (ll)0
#define floop(i,n,c) for(ll i=0;i<n;i=i+c)
//const double e = 1e-9; //Check not exact 1, Use with abs() for floating point numbers instead of ==
const int MAX_N = 1e5 + 5; //Check use?
const ll MOD = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    int A[n];
    floop(i,n,1) cin >> A[i];
    sort(A,A+n);
    ll sum = 0;
    floop(i,n/2,1){
        sum += A[n-1-i];
        sum -= A[i];
    }
    cout << sum << "\n";
}
 
int main()
{
    ios::sync_with_stdio(0);    //Imp use \n only not endl - Slow
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}