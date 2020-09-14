#include <bits/stdc++.h>
using namespace std;

const int N=1e5+6;
int a[N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin>>tt;
    while(tt--) {
        int n; cin>>n;
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a, a+n);
        int ans=0, i=0;
        while(i<n&&a[i]==0) i++;
        if (i<n) i++, ans++;
        for (; i<n; i++) {
            if (a[i] == a[i-1]) continue;
            ans++;
        }
        cout<<ans<<'\n';
    }
}
