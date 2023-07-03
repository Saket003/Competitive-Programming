#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define zero (ll)0
#define floop(i,n,c) for(ll i=0;i<n;i=i+c)
#define endl "\n"
typedef vector < int > vi;
typedef vector < vi > vvi;
typedef pair < int, int > ii;
typedef queue < int > qi;
typedef queue < ii > qii;
#define sz(a) int((a).size())
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define all(c) c.begin(), c.end()
#define tr(c, i) for (typeof (c).begin() i = c.begin(); i != c.end(); i++)
#define present(c, x)(c.find(x) != c.end())
#define cpresent(c, x)(find(all(c), x) != c.end())
const double err = 1e-9; //Check not exact 1, Use with abs() for floating point numbers instead of ==
const int MAX_N = 1e5 + 5; //Check use?
const ll MOD = 1e9 + 7;

int power_mod(ll x, ll y, ll p){
    int val = 1;
    x = x%p;
    if(x==0) return 0;
    while(y>0){
        if(y&1) val = (val*x)%p;
        y = y>>1;
        x = (x*x)%p;
    }
    return val;
}//Otherwise use inbuilt fn

vector<int> sieve_of_eratos(long long int n){//Modify to make workable for query-wise prime factorization
    vector<int> prime;
    floop(i,n+1,1) prime.pb(1);
    prime[0] = 0;
    prime[1] = 0;

    for(int p=2;p*p<=n;p++)
        if(prime[p])
            for(int i = p*p;i<=n;i+=p)
                prime[i] = 0;
    
    return prime;
    //if prime[i] is 1(true), then its prime
}

ll gcd_alt(ll a, ll b){
    return b==0?a:gcd(b,a%b);
}//a>=b, prefer built-in more optimized
ll lcm_alt(ll a,ll b){
    return (a*b)/gcd(a,b);
}

bool check_prime(int n){
    if(n<2) return false;
    if(n<4) return true;
    for(int i=2;i<4;i++)
        if(n%i==0)
            return false;
    for(int i=6;(i+1)*(i+1)<=n;i+=6)
        if(n%(i-1)==0 || n%(i+1)==0)
            return false;
    return true;
}

vector<int> factors(int n) {
    vector<int> f;
    for (int x = 2; x*x <= n; x++) {
        while (n%x == 0) {
            f.push_back(x);
            n /= x;
        }
    }
    if (n > 1) f.push_back(n);
    return f;
}


ll p = 1000000007;

void solve()
{
    ll n;
    cin >> n;
    ll val = 0;
    string s;
    while(n--){
        cin >> s;
        if(s[0]=='+'||s[2]=='+')
            val++;
        else
            val--;
    }
    cout << val;
}

int main()
{
    ios::sync_with_stdio(0);    //Imp use \n only not endl - Slow
    cin.tie(0);
    int t;
    //cin >> t;
    //while (t--)
        solve();
}

/*
Helper
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
string ds="RLDU";
bool possible(ll i, ll j, ll n, ll m){
    return (i<n&&i>=0&&j<m&&j>=0);
}
string rev_path = "";

DFS
int dfs(vector<vector<ll>> &A,ll i,ll j, ll n, ll m, pair<ll,ll> end){
    A[i][j] = 1;
    int chk = 0;
    if((i == end.first) && (j == end.second)){
        return 1;
    }
    floop(k,4,1){
        if(possible(i+dx[k],j+dy[k],n,m) && A[i+dx[k]][j+dy[k]]==0)
            chk = dfs(A,i+dx[k],j+dy[k],n,m,end);
        if(chk){
            rev_path.push_back(ds[k]);
            return 1;
        }
    }
    return 0;
}
*/