#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a;
    cin >> n;
    map <int,int> m;
    while (n--){
        cin >> a;
        if (m.count(a)==0){
            m[a] = 1;
            continue;
        }
        m[a]++;
    }
    int max = 0;
    for(pair<int,int>x:m){
        if(max< x.second)
            max = x.second;
    }
    cout<< (max) << endl;
    
}