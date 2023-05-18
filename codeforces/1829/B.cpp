#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int max_length = 0;
    int length =0;
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        if(temp == 0){
            length++;
        }
        else{
            if(length>max_length){
                max_length = length;
            }
            length = 0;
        }
    }
    if(length>max_length){
                max_length = length;
    }
    length = 0;
    cout << max_length << endl;
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