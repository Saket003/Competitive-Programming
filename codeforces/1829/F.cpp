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

/*
Vertices = 1 + x + xy
Edges = x + xy

Array of size N
For each pair, add to count of both elements

1 1 1 1 1 1 1 1 1 4 4 4 4 4 4 5
Min case - 
1111 222

If 3 distinct
If 2 distinct

Ignore all 1s

if only equal remaining, example z,
x = value, find y from edges

if two distinct, cases possible - 
Ex. 4 and 5 - The single occurence one is x, find y from edges
*/

void solve()
{
    ll n,m;
    cin >> n >> m;
    ll A[n];
    floop(i,n,1){
        A[i] = 0;
    }
    ll t1,t2;
    floop(i,m,1){
        cin >> t1 >> t2;
        A[t1-1] = A[t1-1]+1;
        A[t2-1] = A[t2-1]+1;
    }

    sort(A,A+n);
    ll a,b;
    b = A[n-1];
    int j;
    floop(i,n,1){
        if(A[i]!=1){
            a = A[i];
            j = i;
            break;
        }
    }

    ll x,y;

    if(a == A[j+1])
        x = b;
    else if (b == A[j+1])
        x = a;
    y = int((m-x)/x);
    cout << x <<" "<< y << endl;
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

/*
#include <algorithm>
#include <cmath>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iostream>
#include <istream>
#include <iterator>
#include <list>
#include <map>
#include <memory>
#include <new>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
*/