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
bool cmp(const string& s) {
    char ch = s.front();
    int i = 0, l = s.length();
    while (i < l && s[i] == s.front()) i++;
    trace(i, l, s);
    if (i == l) return true;
    return s.front() < s[i];
}
void solve_test() {
    string s, p; cin >> s >> p; trace(p);
    deque<char> ans(p.begin(), p.end());
    sort(s.begin(), s.end());
    for (char ch: p) s.erase(lower_bound(s.begin(), s.end(), ch));
    trace(s);
    int cnt = 0; bool less=cmp(p);
    for (char ch: s) {
        if (ch < p.front() || (ch == p.front() && less)) cnt++, ans.push_front(ch);
        else ans.push_back(ch); //  if (ch > p.front())
    }
    sort(ans.begin(), ans.begin()+cnt);
    sort(ans.begin()+cnt+p.length(), ans.end());
    for (char ch: ans) cout<<ch;
    cout<<'\n';
}
