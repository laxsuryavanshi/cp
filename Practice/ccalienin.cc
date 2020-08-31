#include <bits/stdc++.h>
using namespace std;

bool can(double md, const vector<int>& v, int d) {
    double pre = v[0];
    for (int i=1; i<v.size(); i++) {
        if (pre+md>static_cast<double>(v[i]+d)) return false;
        pre = max(pre+md, static_cast<double>(v[i]));
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;
    while(tt--) {
        int n, d; cin>>n>>d;
        vector<int> c(n);
        for (auto& i: c) cin>>i;
        sort(c.begin(), c.end());
        double start=0, end=2e9, md;
        int steps=60;
        while(steps--) {
            md = (start+end)/2;
            if (can(md, c, d)) start=md;
            else end=md;
        }
        cout<<setprecision(12)<<start<<'\n';
    }
}
