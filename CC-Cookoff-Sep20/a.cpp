#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;
    while(tt--) {
        int n, k, l; cin>>n>>k>>l;
        if (n > k*l) cout<<"-1\n";
        else {
            int i = k;
            for (int j=0; j<n; j++) {
                i = i%k+1;
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
}
