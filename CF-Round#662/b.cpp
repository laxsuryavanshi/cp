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
    int n; cin >> n;
    map<int, int> m;
    int kk, g4=0, g8=0, g6=0, g2=0;
    for (int i=0; i<n; i++) {
        cin >> kk;
        m[kk]++;
    }
    for(auto&[k, v]: m) {
        if     (v>=8) g8++;
        else if(v>=6) g6++;
        else if(v>=4) g4++;
        else if(v>=2) g2++;
    }
    trace(m);
    trace(g2, g4, g6, g8);
    int q; cin >> q;
    char ch; int pp;
    while(q--) {
        cin >> ch >> pp;
        if (ch == '+') {
            if (m[pp] == 1) g2++;
            if (m[pp] == 3) g2--, g4++;
            if (m[pp] == 5) g4--, g6++;
            if (m[pp] == 7) g6--, g8++;
            m[pp]++;
        }
        else {
            if (m[pp] == 2) g2--;
            if (m[pp] == 4) g2++, g4--;
            if (m[pp] == 6) g4++, g6--;
            if (m[pp] == 8) g6++, g8--;
            m[pp]--;
        }
        trace(m);
        trace(g2, g4, g6, g8);
        if((g8>=1) || (g6>=2) || (g6>=1 && g2>=1) || (g4 >= 2) || (g4 >= 1 && g2 >= 2) ||
            (g6>=1 && g4>=1)) cout << "YES\n";
        else cout << "NO\n";
    }
}
