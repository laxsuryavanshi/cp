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
    string s; cin>>s;
    int ans=0, len=0;
    for (int i=0; i<(int)s.length(); i++) {
        if (s[i] == 'R') len++;
        else {
            ans=max(ans, len);
            len=0;
        }
    }
    ans=max(ans,len);
    cout<<ans<<'\n';
}
