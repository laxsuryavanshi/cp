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
    typedef long long ll;
    ll x, k, d; cin>>x>>k>>d;
    if (static_cast<double>(k) / abs(x) * d > 1.) {
        k -= (abs(x) / d);
        auto nearest = abs(x) % d;
        if (nearest == 0) {
            if (k % 2 == 0) {
                cout<<0;
                return 0;
            } else {
                cout<<d;
                return 0;
            }
        }
        if (x < 0) nearest = -nearest;
        
        if (k % 2 == 0) x = nearest;
        else {
            if (x < 0) {
                trace(1);
                x = (nearest + d);
            }
            else {
                trace(2, x, d);
                x = (nearest - d);
            }
        }
        trace(nearest);
    } else {
        if (x > 0ll) x -= k * d;
        else x += k * d;
    }
    cout<<abs(x);
}
