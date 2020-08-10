#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEBUG
    #include "/home/laxsuryavanshi/Desktop/cp/trace.hpp"
#else
    #define trace(...)
#endif // LOCAL_DEBUG

typedef long long ll;

int32_t main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
    #ifdef LOCAL_INPUT
    freopen("in", "r", stdin);
    #endif
    ll n; cin >> n;
    const ll mod = 1e9+7;
    ll perm = 1;
    for (ll i=1; i<=n; i++) {
        perm = (perm * i) % mod;
    } trace(perm);
    perm = (perm - 1 + mod) % mod;
    ll mn = 1;
    for (int i=1; i<n; i++) {
        perm = (perm - mn + mod) % mod;
        mn = (mn * 2) % mod;
    }
    cout<<perm<<'\n';
}
