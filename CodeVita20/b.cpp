#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEBUG
    #include "/home/laxsuryavanshi/Desktop/cp/trace.hpp"
#else
    #define trace(...)
#endif // LOCAL_DEBUG

const int radius = 6371;

double dist(double lat1, double lon1, double lat2, double lon2) {
    auto dlat = lat2 - lat1;
    auto dlon = lon2 - lon1;
    return 2 * radius * asin(sqrt(
        pow(sin(dlat/2), 2) +
        cos(lat1) * cos(lat2) *
        pow(sin(dlon/2), 2)
    ));
}

bool connect(double lat, double lon, int hig, double jslat, double jslon) {
    auto x = sqrt(2 * hig * radius);
    auto y = dist(lat, lon, jslat, jslon);
    return y <= x;
}

int32_t main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
    #ifdef LOCAL_INPUT
    freopen("in", "r", stdin);
    #endif
    int n; cin >> n; trace(n);
    vector<double> lat(n), lon(n), hig(n);
    double jslat, jslon;
    for (auto& i: lat) cin >> i;
    for (auto& i: lon) cin >> i;
    for (auto& i: hig) cin >> i;
    cin >> jslat >> jslon;
    std::for_each(lat.begin(), lat.end(), [](auto& deg) {
        deg = deg * M_PI / 180;
    }); trace(lat);
    std::for_each(lon.begin(), lon.end(), [](auto& deg) {
        deg = deg * M_PI / 180;
    }); trace(lon);
    jslat = jslat * M_PI / 180; jslon = jslon * M_PI / 180;
    trace(jslat, jslon);
    auto ans = 0;
    for (int i=0; i<n; i++) {
        if (connect(lat[i], lon[i], hig[i], jslat, jslon)) ans++;
    }
    cout<<ans;
}
