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
    int n, k; cin >> n >> k;
    int tt; multiset<int> ht;
    for (int i=0; i<n; i++) {
        cin >> tt;
        ht.insert(tt);
    }
    trace(ht);
    while(k--) {
        auto elem = (*ht.rbegin());
        auto it = ht.end();
        --it;
        ht.erase(it);
        ht.insert(elem/2);
        trace(ht);
    }
    auto sum = 0ll;
    for (auto i: ht) sum += i;
    cout<<sum;
}
