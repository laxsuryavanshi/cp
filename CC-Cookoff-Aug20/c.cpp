#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEBUG
#include <trace.hpp>
#else
#define trace(...) 1
#endif
#define x first
#define y second
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;
    while(tt--) {
        int n; cin>>n;
        vector<pair<double, double>> v(n);
        for (auto&[kk, vv]: v) cin>>kk>>vv;
        trace(v);
        int ans=n;
        while (n > 5) {
            n /= 2;
            ans += n;
        }
        cout<<ans<<'\n';
    }
}
