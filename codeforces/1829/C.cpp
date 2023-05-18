#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int M11, M10, M01;
    M11 = -1;
    M10 = -1;
    M01 = -1;
    int temp;
    char c1,c2;
    for(int i=0;i<n;i++){
        cin >> temp >> c1 >> c2;
        if(c1 == '1' && c2 == '1' && ((temp < M11)||(M11 < 0)))
            M11 = temp;
        else if(c1 == '1' && c2 == '0' && ((temp < M10)||(M10 < 0)))
            M10 = temp;
        else if(c1 == '0' && c2 == '1' && ((temp < M01)||(M01 < 0)))
            M01 = temp;
    }

    if(M11<0 && ((M10<0)||(M01<0)))
        cout << -1 << endl;
    else if(M11<0)
        cout << M10+M01 << endl;
    else if((M10<0)||(M01<0))
        cout << M11 << endl;
    else
        cout << min(M11, M10+M01) << endl;
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