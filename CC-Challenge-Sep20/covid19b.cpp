#include <bits/stdc++.h>
using namespace std;

#define eps 1e-6

const int N=10;
int b[N];
double a[N], t[N];

#include <trace.hpp>

void solve(int i, int n) {
    double psi = i+a[i]*t[i];
    for (int j = 1; j <= n; j++) {
        double psj = j+a[j]*t[i];
        auto spd = abs(psj-psi)/abs(a[i]-a[j]);
        if ((psj<(psi+eps)&&a[j]>a[i])||(psj>(psi-eps)&&a[j]<a[i])) {
            if (b[j]==0||t[j]>(t[i]+spd)) {
                b[j]=1; t[j]=t[i]+spd;
                trace(psi, psj, spd, t[i], t[j]);
                solve(j, n);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;
    while(tt--) {
        int n; cin>>n;
        for (int i=1; i<=n; i++) {
            cin>>a[i];
        }
        int mn = n+1, mx = 0;
        for (int i=1; i<=n; i++) {
            fill(b, b+N, 0);
            fill(t, t+N, 2e9);
            b[i] = 1; t[i] = 0;
            trace(i);
            solve(i, n);
            int cnt=0;
            for (int j=1; j<=n; j++)
            if (b[j]) cnt++;
            mx = max(cnt, mx);
            mn = min(cnt, mn);
        }
        cout << mn << " " << mx << '\n';
    }
}
