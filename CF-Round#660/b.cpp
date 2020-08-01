#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        auto k=(n+3)/4;
        while(n>k) {
            cout<<"9";
            n--;
        }
        while(k--) {
            cout<<"8";
        }
        cout<<'\n';
    }
}
