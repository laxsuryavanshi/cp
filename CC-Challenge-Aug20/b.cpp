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
    int n, k; cin >> n >> k;
    vector<int> v(n);
    auto ans = -1;
    for(auto& i: v) {
        cin >> i;
        if (k % i == 0 && i > ans) ans = i;
    }
    cout << ans << '\n';
}
