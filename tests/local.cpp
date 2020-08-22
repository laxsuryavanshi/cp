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

#define rep(i, a, b)  for(int i = (a); i <= static_cast<int>(b); i++)
#define rrep(i, a, b) for(int i = (a); i >= static_cast<int>(b); i--)
#define rin(x, v)     for(auto& x: v)

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
template<typename T>
inline void
print(const vector<T>& v) {
    if (v.empty()) return;
    rep(i, 0, v.size()-2) {
        cout << v[i] << " ";
    } cout << v[v.size()-1] << nl;
}
static const int mod = 1e9+7;
inline int add(int a, int b, int m=mod) { return ((a % m) + (b % m)) % m; }
inline int sub(int a, int b, int m=mod) { return ((a % m) - (b % m) + m) % m; }
inline int mul(int a, int b, int m=mod) { return ((a % m) * 1ll * (b % m)) % m; }
inline int power(int a, int b, int m=mod) {
    int res = 1;
    while (b > 0) {
        if (b % 2) res = mul(res, a, m);
        a = mul(a, a, m);
        b /= 2;
    }
    return res;
}
void solve_test();
int32_t main() {
    int tc; read(tc);
    rep(tt, 1, tc) {
        BENCHMARK(solve_test);
    }
}
void solve_test() {
    __gcd(20, 10);
}
