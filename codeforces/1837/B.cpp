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
    string s;
    cin >> s;

    ll mini = 1;
    ll maxi = 1;
    ll curr = 1;

    floop(i,n-1,1){
        if(s[i] == '<'){
            if(s[i+1] == '<')
                curr += 1;
            else
                curr = max(curr+1,maxi);
        }
        else{
            if(s[i+1] == '<')
                curr = min(curr-1,mini);
            else
                curr -= 1;
        }
        if(curr > maxi)
            maxi = curr;
        if(curr < mini)
            mini = curr; 
    }  

    //Checking last case solo
    if(s[n-1] == '<'){
        if(curr == maxi)
            maxi +=1;
    }
    else{
        if(curr == mini)
            mini -= 1;
    }

    cout << maxi-mini+1 << endl;
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