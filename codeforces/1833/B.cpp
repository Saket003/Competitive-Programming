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
    ll n,k;
    cin >> n >> k;
    pi A[n];
    ll Bcopy[n],B[n];

    ll temp;
    floop(i,n,1){
        cin >> temp;
        A[i].first = temp;
        A[i].second = i;
    }
    floop(i,n,1){
        cin >> temp;
        Bcopy[i] = temp;
    }

    sort(A,A+n);
    sort(Bcopy,Bcopy+n);

    ll index;
    floop(i,n,1){
        index = A[i].second;
        B[index] = Bcopy[i];
    }

    floop(i,n,1){
        cout << B[i] <<" ";
    }
    cout << endl;
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