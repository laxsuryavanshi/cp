/*
https://codeforces.com/contest/1383/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5;
char a[N], b[N];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tt; cin>>tt;
    while(tt--) {
        int n; cin>>n;
        cin >> a >> b;
        vector<vector<int>> adj(20); // 20 chars used only
        bool bad = false;
        for (int i=0; i<n; i++) {
            if (a[i] != b[i]) {
                if (a[i] > b[i]) {
                    bad = true;
                    cout<<"-1\n";
                    break;
                }
                adj[a[i]-'a'].push_back(b[i]-'a');
                adj[b[i]-'a'].push_back(a[i]-'a');
            }
        }
        if (bad) continue;
        vector<bool> mark(20);
        function<void(int)> dfs = [&](int u) {
            mark[u] = true;
            for (auto v: adj[u]) {
                if (!mark[v]) dfs(v);
            }
        };

        int ans = 20;
        for (int i=0; i<20; i++) {
            if (!mark[i]) dfs(i), --ans;
        }
        cout<<ans<<'\n';
    }
}
