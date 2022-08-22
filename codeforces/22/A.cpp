#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,num;
    cin >> t;
    set<int> s;
    while (t--){
        cin >> num ;
        s.insert(num);
    }
    if(s.size()<2)
        cout << "NO" <<endl;
    else
        cout<< *(++s.begin()) << endl;
}