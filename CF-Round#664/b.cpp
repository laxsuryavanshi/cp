#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEBUG
    #include "/home/laxsuryavanshi/Desktop/cp/trace.hpp"
#else
    #define trace(...)
#endif // LOCAL_DEBUG

void print_row(int i, vector<vector<bool>>& vis, int& y) {
    vis[i][0] = true;
    if (!vis[i][y]) cout<<i<<" "<<y<<'\n';
    int last = 0;
    vis[i][y] = true;
    auto yy = y;
    while (yy>0) {
        if (!vis[i][yy]) {
        cout<<i<<" "<<yy<<'\n';
        last = yy;}
        vis[i][yy]=true;
        yy--;
    }
    yy = y;
    while(yy < vis[0].size()) {
        if (!vis[i][yy]) {
        cout<<i<<" "<<yy<<'\n';
        last = yy;}
        vis[i][yy]=true;
        yy++;
    }
    y = last;
}

int32_t main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
    #ifdef LOCAL_INPUT
    freopen("in", "r", stdin);
    #endif
    int n, m, sx, sy; cin>>n>>m>>sx>>sy;
    trace(n, m, sx, sy);
    vector<vector<bool>> vis(n+1, vector<bool>(m+1, false));
    cout<<sx<<" "<<sy<<'\n';
    vis[sx][sy] = true;

    for (int i=1; i<=n; i++) {
        if (!vis[i][0]) print_row(i, vis, sy);
    }
}
