#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEBUG
    #include "/home/laxsuryavanshi/Desktop/cp/trace.hpp"
#else
    #define trace(...)
#endif // LOCAL_DEBUG

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        vector<long> a(n), b(n);
        long mnx;
        long mna=INT_MAX, mnb=INT_MAX, xa, xb, ans=0;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            if(mna>a[i])mna=a[i];
        }
        for(int i=0; i<n; i++) {
            cin>>b[i];
            if(mnb>b[i])mnb=b[i];
        }
        trace(a, b, mna, mnb);
        for(int i=0; i<n; i++) {
            xa=a[i]-mna;
            xb=b[i]-mnb;
            auto mnx=min(xa, xb);
            ans+=mnx;
            xa-=mnx; xb-=mnx;
            ans+=(xa+xb);
            trace(xa, xb, mna, mnb, ans);
        }
        cout<<ans<<'\n';
    }
}
