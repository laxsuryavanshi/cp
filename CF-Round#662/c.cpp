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
    int n; cin >> n;
    vector<int> a(n+1, 0);
    int kk, mx=0;
    for(int i=0; i<n; i++) {
        cin >> kk;
        a[kk]++;
        if(a[kk]>mx) mx=a[kk];
    }
    int mxc=0;
    for(auto i: a) if(i == mx) mxc++;
    //////////////////////////////////////
    auto blocks_remaining = n - mx * mxc;
    auto width_bet_blocks = mxc - 1;
    auto blocks_in_bet = blocks_remaining / (mx - 1);
    auto ans = blocks_in_bet + width_bet_blocks;
    cout << ans << '\n';
}
