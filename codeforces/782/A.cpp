#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,sock,max=0;
    cin >> n;
    n = 2*n;
    set<int> s;
    while (n--){
        cin >> sock ;
        if(s.count(sock)==0){
            s.insert(sock);
            continue;
        }
        max = (s.size()>max)?s.size():max;
        s.erase(sock);
    }
    cout << max;
}