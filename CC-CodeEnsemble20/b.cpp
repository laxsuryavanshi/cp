#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#ifdef LOCAL_DEBUG
#include <trace.hpp>
#else
#define trace(...) 1
#define debug(...) 1
#define BENCHMARK(func, ...) func()
#endif // LOCAL_DEBUG
#if __cplusplus >= 201703L
#define register // warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
#endif // __cplusplus >= 201703L
// v -> container_t || x -> element_t
#define nl        '\n'
#define pb(x)     push_back(x)
#define eb(x)     emplace_back(x)
#define pf(x)     push_front(x)
#define all(v)    v.begin(), v.end()
#define rall(v)   v.rbegin(), v.rend()
#define sort(v)   sort(all(v))
#define rsort(v)  sort(rall(v))
#define lb(v, x)  lower_bound(all(v), x)
#define ub(v, x)  upper_bound(all(v), x)

// #define rep(i, a, b)  for(decltype(b) i = (a); i <= (b); i++)
// #define rrep(i, a, b) for(decltype(b) i = (a); i >= (b); i--)

#define rep(i, a, b)  for(int i = (a); i <= static_cast<int>(b); i++)
#define rrep(i, a, b) for(int i = (a); i >= static_cast<int>(b); i--)
#define rin(x, v)     for(auto& x: v)

// do not use with T = int
template <typename T>
std::istream&
operator>>(std::istream& is, std::vector<T>& V) {
    for (auto& v: V) is >> v;
    return is;
}
template <typename T, std::size_t N>
std::istream&
operator>>(std::istream& is, std::array<T, N>& A) {
    for (auto& a: A) is >> a;
    return is;
}
template <typename T, typename U>
std::istream&
operator>>(std::istream& is, std::pair<T, U>& P) {
    return is >> P.first >> P.second;
}
#define read(...) __read(__VA_ARGS__)
template <typename Arg>
inline void
__read(Arg& arg) { std::cin >> arg; }
// Need to verify WA on codechef
/* template <>
void
__read(int& x) {
    bool neg = false;
    x = 0;
    register char c = getchar();
    if (c == '-') {
        neg = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        x = (x<<1) + (x<<3) + c - 48;
    if (neg) x *= -1;
} */
template <typename Arg1, typename... Args>
void
__read(Arg1& arg1, Args&... args) {
    __read(arg1); __read(args...);
}
static const int fastio = []() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
    return 0;
}();
static const int readin = []() {
    #ifdef LOCAL_INPUT
    auto input = freopen("in", "r", stdin);
    if (!input) cerr << "ERROR: stdin file not found" << endl;
    #endif
    return 0;
}();
void solve_test();
int32_t main() {
    int tc; read(tc);
    rep(tt, 1, tc) {
        BENCHMARK(solve_test);
    }
}
#define int long long
void solve_test() {
    string s; cin>>s;
    int x1, y1; cin>>x1>>y1;
    int q; cin>>q;
    map<char, int> ht;
    for(char ch: s) ht[ch]++;
    trace(ht);
    while (q--) {
        int x2, y2; cin>>x2>>y2;
        int dx = x2 - x1, dy = y2 - y1;
        bool ans = true;
        
        if (dx > 0 && ht['R'] < abs(dx)) ans = false;
        else if (dx < 0 && ht['L'] < abs(dx)) ans = false;

        if (dy > 0 && ht['U'] < abs(dy)) ans = false;
        else if (dy < 0 && ht['D'] < abs(dy)) ans = false;
        trace(x1, y1); trace(x2, y2); trace(dx, dy);

        if (ans) {
            cout<<"YES " << (abs(dx)+abs(dy)) << nl;
        } else {
            cout<<"NO\n";
        }
    }
}
