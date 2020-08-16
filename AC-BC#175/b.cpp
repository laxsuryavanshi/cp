#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEBUG
    #include "/home/laxsuryavanshi/Desktop/cp/trace.hpp"
#else
    #define trace(...)
#endif // LOCAL_DEBUG

int32_t main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
    #ifdef LOCAL_INPUT
    freopen("in", "r", stdin);
    #endif
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    auto ans=0ll;
    for (int i=0; i<n-2; i++) {
        for (int j=i+1; j<n-1; j++) {
            for (int k=j+1; k<n; k++) {
                if (v[i] != v[j] && v[j] != v[k] && v[k] != v[i] &&
                (v[i]+v[j]>v[k])&&(v[j]+v[k]>v[i])&&(v[i]+v[k]>v[j])) ans++;
                trace(i, j, k, v[i], v[j], v[k], ans);
            }
        }
    }
    cout<<ans;
}
