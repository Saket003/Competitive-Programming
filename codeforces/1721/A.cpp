#include <bits/stdc++.h>

using namespace std;
void solve()
{
    set <char> s;
    char ch;
    cin >> ch;
    s.insert(ch);
    cin >> ch;
    s.insert(ch);
    cin >> ch;
    s.insert(ch);
    cin >> ch;
    s.insert(ch);
    cout << s.size() - 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}