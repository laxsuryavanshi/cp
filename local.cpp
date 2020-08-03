#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL_DEBUG
template <typename T> ostream&
operator<<(ostream& os, vector<T> V)
{ os << "[ "; for(auto v: V) os << v << " ";
  os << "]"; return os; /*prints std::vector*/ }
template <typename T, typename U> ostream&
operator<<(ostream& os, pair<T, U> P)
{ os << "(" << P.first << ", " << P.second;
  return os << ")"; /*prints std::pair*/ }
template <typename T, typename U> ostream&
operator<<(ostream& os, map<T, U> V)
{ os << "{ "; for(auto v: V) os << v << " ";
  os << "}"; return os; /*prints std::map*/ }
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg> void
__f(const char* name, Arg&& arg)
{ cout << name << ": " << arg << '\n'; }
template <typename Arg1, typename... Args> void
__f(const char* names, Arg1&& arg1, Args&&... args)
{ const char* comma = strchr(names+1, ',');
  cout.write(names, comma-names) << ": "
  << arg1 << "| "; __f(comma+1, args...); }
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
}
