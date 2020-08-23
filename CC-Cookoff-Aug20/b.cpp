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
        int n, k; cin>>n>>k;
        string s; cin>>s;
        int zero=0;
        for (char ch: s) if(ch=='0')zero++;
        int kk = n/k;
        if (zero%kk || (n-zero)%kk) { cout<<"IMPOSSIBLE\n"; continue; }
        string aa = "";
        for (int i=0; i<zero/kk; i++) aa+='0';
        for (int i=0; i<(n-zero)/kk; i++) aa+='1';
        auto bb(aa);
        string ans="";
        reverse(bb.begin(), bb.end());
        trace(n, k, kk, aa, bb);
        for (int i=0; i<n/k; i++) {
            if (i%2) ans+=bb;
            else ans+=aa;
        }
        cout<<ans<<'\n';
    }
}
