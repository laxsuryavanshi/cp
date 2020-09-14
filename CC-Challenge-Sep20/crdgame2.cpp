#include <bits/stdc++.h>
using namespace std;
const int mod=1000000007;

const int N=1e5+5;
int a[N];

int binpow2(int a, int n) {
    int res = 1;
    while (n) {
        if (n&1) res = res*1ll*a%mod;
        a = a * 1ll * a % mod;
        n /= 2;
    }
    return res;
}

int perm(int n) {
    int num = 1, den = 1;
    for (int i=1; i<=n/2; i++) {
        num = num*1ll*i%mod;
        den = den*1ll*i%mod;
    }
    for (int i=n/2+1; i<=n; i++) {
        num = num*1ll*i%mod;
    }
    den = den*1ll*den%mod;

    return num * 1ll * binpow2(den, mod-2) % mod;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin >> tt;
    while(tt--) {
        int n; cin>>n;
        for (int i=0; i<n; i++) cin>>a[i];
        sort(a, a+n);
        auto it = lower_bound(a, a+n, a[n-1]);
        auto elem = distance(it, a+n);

        if (elem%2) cout<<binpow2(2, n)<<'\n';
        else {
            cout<<((binpow2(2, n)-(perm(elem)*1ll*binpow2(2, n-elem)%mod)+mod)%mod)<<'\n';
        }
    }
}
