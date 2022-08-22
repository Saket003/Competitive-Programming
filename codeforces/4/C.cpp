#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,sock,max=0;
    cin >> n;
    map<string, int> m;
    string str;
    while (n--){
        cin >> str;
        if (m.count(str)==0){
            m[str] == 0;
            cout << "OK" << endl;
            continue;
        }
        m[str]++;
        cout<< str << m[str] << endl;
    }
    
}