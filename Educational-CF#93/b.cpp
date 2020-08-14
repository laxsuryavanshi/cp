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
    string s; cin>>s;
    vector<int> ln;
    auto i=0, start=0;
    while (i < s.length()) {
        while (i < s.length() && s[i] != '1') i++;
        start = i;
        while (i < s.length() && s[i] == '1') i++;
        ln.push_back(i-start);
    } trace(s);
    sort(ln.rbegin(), ln.rend());
    trace(ln);
    auto ans=0;
    for (int kk=0; kk<(int)ln.size(); kk+=2) ans+=ln[kk];
    cout<<ans<<'\n';
}
