#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEBUG
    #include "/home/laxsuryavanshi/Desktop/cp/trace.hpp"
#else
    #define trace(...)
#endif // LOCAL_DEBUG

void solve_test();

int32_t main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
    #ifdef LOCAL_INPUT
    freopen("in", "r", stdin);
    #endif
    int tt; cin >> tt;
    for (int t=1; t<=tt; t++) {
        solve_test();
    }
}

void solve_test() {
    int n; cin>>n;
    vector<char> v(n);
    for(auto& i: v) cin >> i;
    vector<char> sq;
    vector<int> ans(n, -1);
    int sq0 = 0, sq1 = 0;
    for(int i=0; i<n; i++) {
        bool gone=false;
        for(int j=0; j<sq.size(); j++) {
            if(v[i] == '0') {
                if (sq1 == 0) break;
            }
            if(v[i] == '1') {
                if (sq0 == 0) break;
            }
            if(sq[j] != v[i]) {
                if(v[i] == '0') sq0++, sq1--;
                if(v[i] == '1') sq1++, sq0--;
                ans[i]=j+1;
                gone=true;
                sq[j]=v[i];
                break;
            }
        }
        if(!gone) {
            if(v[i] == '0') sq0++;
            if(v[i] == '1') sq1++;
            sq.emplace_back();
            sq.back()=v[i];
            ans[i]=sq.size();
        }
    }
    cout<<sq.size()<<'\n';
    for(int i=0; i<n; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<'\n';
}
