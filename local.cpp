#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEBUG
#include <trace.hpp>
#else
#define trace(...)
#endif // LOCAL_DEBUG

static const int fastio = []() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
    return 0;
}();
static const int readin = []() {
    #ifdef LOCAL_INPUT
    freopen("in", "r", stdin);
    #endif
    return 0;
}();
void solve_test();

int32_t main() {
    int tt; cin >> tt;
    for (int t=1; t<=tt; t++) {
        solve_test();
    }
}

void solve_test() {
}
