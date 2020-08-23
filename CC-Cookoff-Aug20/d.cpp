#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEBUG
#include <trace.hpp>
#else
#define trace(...) 1
#endif

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;
    while(tt--) {
        int n; cin>>n; int u, v;
        vector<vector<int>> adj(n+1);
        vector<int> p(n+1, -1);
        vector<int> col(n+1);
        for (int i=0; i<n-1; i++) {
            cin>>u>>v;
            p[v] = u;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int root=0;
        for (int i=1; i<=n; i++) {
            if (p[i]==-1) root=i;
        }
        int b=0; char color;
        for (int i=1; i<=n; i++) {
            cin>>color;
            int cc = color-'0';
            b+=cc;
            col[i]=cc;
        }
        int r=n-b;
        int h=0, mm=n;
        while(mm) h++, mm>>=1;
        auto ans=0ll;
        queue<int> q;
        q.push(root)
        while(!q.empty()) {
        }
    }
}
