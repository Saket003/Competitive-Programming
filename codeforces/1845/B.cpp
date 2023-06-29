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
    ll xa,ya,xb,yb,xc,yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    xb -= xa;
    yb -= ya;
    xc -= xa;
    yc -= ya;

    if(xc*xb==0 && yc*yb==0)
        cout << "1\n";
    else if(xc*xb==0){
        if(yc*yb>0){
            cout << min(abs(yc),abs(yb))+1 << "\n";
        }
        else
            cout << "1\n";
    }
    else if(yc*yb==0){
        if(xc*xb>0){
            cout << min(abs(xc),abs(xb))+1 << "\n";
        }
        else
            cout << "1\n";
    }
    else if(xc*xb>0 && yc*yb>0){//same quadrant
        cout << min(abs(xc),abs(xb)) + min(abs(yc),abs(yb))+1 << "\n";
    }
    else if(xc*xb<0 && yc*yb<0){//opposite quadrants
        cout <<"1\n";
    }
    else{//nbring quadrants
        if(xc*xb>=0){
            cout << min(abs(xc),abs(xb))+1 << "\n";
        }
        else{
            cout << min(abs(yc),abs(yb))+1 << "\n";
        }
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