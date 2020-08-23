#include <bits/stdc++.h>
using namespace std;

const long long INF=2e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;
    while(tt--) {
        int n; cin>>n; int u, v; auto ans=0ll;
        vector<vector<int>> adj(n);
        vector<int> parity(n), excess(n), req(n);
        for (int i=1; i<n; i++) {
            cin>>u>>v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        string s; cin>>s;
        function<void(int, int, int)> assign_parity = [&](int node, int parent, int t) {
            parity[node] = t;
            for (auto to: adj[node]) {
                if (to == parent) continue;
                assign_parity(to, node, t^1);
            }
        };

        function<void(int, int, int)> dfs = [&](int node, int parent, int prty) {
            excess[node]=(parity[node]==prty);
            req[node]=(s[node]=='0');
            //if (s[node]=='0' and parity[node]==1) excess[node]++;
            //if (s[node]=='1' and parity[node]==0) req[node]++;
            for (auto to: adj[node]) {
                if (to == parent) continue;
                dfs(to, node, prty);
                excess[node]+=excess[to];
                req[node]+=req[to];
            }
            int temp = min(excess[node], req[node]);
            excess[node]-=temp; req[node]-=temp;
            ans += (excess[node]+req[node]);
        };

        assign_parity(0, -1, 0);
        long long res = INF;
        for (int i=0; i<2; i++) {
            ans = 0;
            dfs(0, -1, i);
            if (excess[0] == req[0]) {
                res = min(res, ans);
            }
        }
        cout << (res == INF ? -1 : res) << '\n';
    }
}
