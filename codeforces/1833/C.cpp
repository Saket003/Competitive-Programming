#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define vi vector<int>
#define pi pair<int,int>

#define floop(i,n,c) for(ll i=0;i<n;i=i+c)

//const double e = 1e-9; //Check not exact 1, Use with abs() for floating point numbers instead of ==
const int MAX_N = 1e5 + 5; //Check use?
const ll MOD = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    ll A[n];
    ll evens, odds, least_even, least_odd;
    evens = 0;
    odds = 0;
    least_even = 1e11;
    least_odd = 1e11;

    floop(i,n,1){
        cin >> A[i];
        if(A[i]%2==0){
            evens++;
            if(least_even>A[i])
                least_even = A[i];
        }
        else{
            odds++;
            if(least_odd>A[i])
                least_odd = A[i];
        }
    }

    if(evens == n || odds == n){
        cout << "YES" << endl;
        return;
    }

    ll check;

    //check = all_odd_test()
    if(least_even<least_odd){
        cout<< "NO" << endl;
        return;
    }
    //ll occur = count(A,A+n,least_odd);
    cout << "YES" << endl;

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