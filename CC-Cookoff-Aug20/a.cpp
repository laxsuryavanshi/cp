#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEBUG
#include <trace.hpp>
#else
#define trace(...) 1
#endif

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;
    while(tt--) {
        int n, k; cin>>n>>k;
        vector<int> v(n);
        for (auto& i: v) cin>>i;
        int sm=0, ans=0; bool bad=false;
        for (int i=0; i<n; i++) {
            if (sm+v[i] > k) ans++, sm=v[i];
            else sm+=v[i];
            if (v[i] > k) {
                cout<<"-1\n";
                bad=true;
                break;
            }
        }
        ans++;
        if (bad) continue;
        cout<<ans<<'\n';
    }
}
