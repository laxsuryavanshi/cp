#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEBUG
    #include "/home/laxsuryavanshi/Desktop/cp/trace.hpp"
#else
    #define trace(...)
#endif // LOCAL_DEBUG
#define ll long long

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
    ll n, k; cin>>n>>k;
    vector<ll> v(n);
    for (auto&i:v) cin>>i;
    auto mxpos = max_element(v.begin(), v.end());
    auto mx = *mxpos;
    for (auto& i: v) i = mx - i; trace(v);
    k--;
    auto tv(v);
    if (k) {
        auto kmx = *max_element(v.begin(), v.end());
        for (auto& i: tv) i = kmx - i;
    }
    if (k % 2 == 0)
        for (auto i: v) cout<<i<<" ";
    else
        for (auto i: tv) cout<<i<<" ";
    cout<<'\n';
}
