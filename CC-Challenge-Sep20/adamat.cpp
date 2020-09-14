#include <bits/stdc++.h>
using namespace std;

const int N=100;
int a[N][N];

#define trace(...) 1

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin>>tt;
    while(tt--) {
        int n; cin>>n;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cin>>a[i][j];
            }
        }
        vector<int> ord;
        for (int i=n-1; i>0; i--) {
            if (a[i][0] != i*n+1) {
                ord.push_back(i);
            }
        }
        trace(ord);
        int ans=0;
        int i;
        for(i=0; i<(int)ord.size()-1; i++) {
            if (ord[i]-ord[i+1]==1) continue;
            ans+=2;
        }
        if(!ord.empty()) {
            if(ord.back()!=1)ans+=2;
            else ans++;
        }
        cout<<ans<<'\n';
    }
}
