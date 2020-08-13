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
    int r, g, b, w; cin>>r>>g>>b>>w;
    trace(r, g, b, w);
    auto yes = "Yes\n", no = "No\n";

    int kk = r%2+g%2+b%2;
    if (kk==0)cout<<yes;
    else if (kk==3)cout<<yes;
    else if (kk==1) {
        if (w%2==0)cout<<yes;
        else cout<<no;
    } else {
        if (w%2==0)cout<<no;
        else if (r==0||g==0||b==0)cout<<no;
        else cout<<yes;
    }
}
