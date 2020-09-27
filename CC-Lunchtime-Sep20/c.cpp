#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin >> tt;
    while(tt--) {
        int n, u, v;
        cin>>n;
        vector<int> vis(n, 1);
        for (int i=1; i<n; i++) {
            cin>>u>>v;
            u--; v--;
            vis[v]=0;
        }
        cout<<(accumulate(vis.begin(), vis.end(), 0)-1)<<'\n';
    }
}
