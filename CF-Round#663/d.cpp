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
    int n, m; cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    int sm = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            char ch;
            cin >> ch;
            grid[i][j] = ch-'0';
            sm += grid[i][j];
        }
    }
    trace(sm, n*m);
}
