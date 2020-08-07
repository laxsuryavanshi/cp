#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEBUG
    #include "/home/laxsuryavanshi/Desktop/cp/trace.hpp"
#else
    #define trace(...)
#endif // LOCAL_DEBUG

void solve_test();

int32_t main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
    #ifdef LOCAL_INPUT
    freopen("in", "r", stdin);
    #endif
    int tt; cin >> tt;
    for (int t=1; t<=tt; t++) {
        solve_test();
    }
}

void solve_test() {
    int n, ans=0; cin >> n;
    map<int, int> w;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        auto&ann = v[i];
        cin>>ann;
        w[ann]++;
    }
//    trace(v);
    map<int, int> ht;
    for(int i=0; i<=2*n; i++) {
        ht.clear();
        for(auto j:v) {
            if(j>=i) continue;
            ht[i-j]++;
        }
        int tmp=0;
        for(auto&[k, v]: ht) {
            tmp+=min(v, w[k]);
        }
        tmp/=2;
        ans=max(ans, tmp);
  //      trace(i, w, ht, ans, tmp);
    }
    cout<<ans<<'\n';
}
