#include <bits/stdc++.h>
using namespace std;

#ifndef LOCAL_DEBUG
#define trace(...) 1
#else
#include <trace.hpp>
#endif

const int N=1e5+5;
char s[N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;
    while(tt--) {
        int n, k, z=0, o=0; cin>>n>>k;
        vector<int> ln; ln.reserve(n);
        for (int i=0; i<n; i++) {
            cin>>s[i];
            if (s[i] == '1') o++;
            if (s[i]=='0') z++;
            else if (z) {
                ln.push_back(z);
                z=0;
            }
        }
        if (s[n-1]=='0') {
            ln.push_back(z);
            z=0;
        }
        trace(ln);
        int ans=n-o, td1=0, td2=0;
        if (s[0]=='0' && ln.size()) td1=ln.front(), ln.erase(ln.begin());
        if (s[n-1]=='0'&&n>1 && ln.size()) td2=ln.back(), ln.pop_back();
        trace(ans, td1, td2);
        sort(ln.rbegin(), ln.rend());
        auto it=ln.begin();
        while(k>0) {
            if (k>1&&it!=ln.end()&&*it>(td1+td2)) {
                ans-=(*it);
                k-=2;
                it++;
            } else {
                if (td1>td2) {
                    ans-=td1;
                    k--;
                    td1=0;
                } else {
                    ans-=td2;
                    k--;
                    td2=0;
                }
            }
        }
        cout<<ans<<"\n";
    }
}
