#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll pivot(ll n) {
    ll cnt=n-1, step, m, st=1;
    ll sma=n*(n+1)/2;
    while(cnt>0) {
        m = st;
        step=cnt/2;
        m+=step;
        ll pre=m*(m+1)/2;
        ll pos=sma-pre;
        if(pos-pre>2*(n-1)) {
            st=m+1;
            cnt-=step+1;
        }
        else cnt=step;
    }
    return st;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;
    while(tt--) {
        ll n; cin>>n;
        if(n%4==1||n%4==2) { cout<<"0\n"; continue; }
        ll sma=n*(n+1)/2;
        ll ans=0;
        ll i=pivot(n);
        for(; i<n; i++) {
            ll pre=i*(i+1)/2;
            ll pos=sma-pre;
            if (pre==pos) { ans+=(i*(i-1)/2+(n-i)*(n-i-1)/2); break; }
            if (pre>pos) break;
            ll df=(pos-pre); // odd even
            if (df%2) continue;
            df /= 2;
            if (df>=n) continue;
            ans+=min(df, min(i, min(n-i, n-df)));
        }
        cout<<ans<<'\n';
    }
}
