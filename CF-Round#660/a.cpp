#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        if(n<=30) cout << "NO\n";
        else {
            cout << "YES\n";
            if(n-30 == 6 || n-30 == 10 || n-30 == 14) {
                cout<<"6 10 15 "<<n-31<<'\n';
            } else {
                cout<< "6 10 14 " << n-30<<'\n';
            }
        }
    }
}
