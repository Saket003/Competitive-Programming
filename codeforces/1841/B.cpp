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
    int resets = 0;
    ll max = -1;
    ll temp;
    ll min_initial = 1e9+1;
    ll safe = 1e9+1;
    floop(i,n,1){
        cin >> temp;
        if(temp>=max && temp<=safe){
            cout << 1;
            max = temp;
        }
        else if(resets == 0 && temp <= min_initial){
            max = temp;
            cout << 1;
            resets = 1;
            safe = min_initial;
        }
        else{
            cout << 0;
        }
        if(temp<min_initial && resets == 0){
            min_initial = temp;
        }
    }
    cout << "\n";
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