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
    int n, m; cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for (auto& i: v) for (auto& j: i) cin >> j;
    int ans = 0;
    for (int i=0; i<n; i++) {
        if (v[i].back() != 'D') ans++;
    }
    for (int i=0; i<m; i++) {
        if (v[n-1][i] != 'R') ans++;
    }
    ans-=2;
    cout<<ans<<'\n';
}
