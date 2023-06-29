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
    ll n,k,x;
    cin >> n >> k >> x;
    if(k==1 and x==1)
        cout << "NO\n";
    else if(x==1){
        if(n%2==0){
            cout << "YES\n" << n/2 <<"\n";
            floop(i,n/2,1)    cout << "2 ";
            cout <<"\n";
        }
        else{
            if(k>=3){
                cout << "YES\n" << ((n-3)/2)+1 <<"\n";
                n -= 3;
                cout << "3 ";
                floop(i,n/2,1)    cout << "2 ";
                cout <<"\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    else{
        cout << "YES\n" << n <<"\n";
        floop(i,n,1)    cout << "1 ";
        cout <<"\n";
    }
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