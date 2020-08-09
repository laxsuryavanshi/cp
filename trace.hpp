#ifndef CP_TRACE_HPP
#define CP_TRACE_HPP

template <typename T>
ostream&
operator<<(ostream& os, vector<T> V) {
    os << "[ ";
    for(auto v: V) os << v << " ";
    os << "]"; return os;
    /*prints std::vector*/
}

template <typename T>
ostream&
operator<<(ostream& os, set<T> V) {
    os << "[ ";
    for(auto v: V) os << v << " ";
    os << "]"; return os;
    /*prints std::set*/
}

template <typename T>
ostream&
operator<<(ostream& os, multiset<T> V) {
    os << "[ ";
    for(auto v: V) os << v << " ";
    os << "]"; return os;
    /*prints std::multiset*/
}

template <typename T, typename U>
ostream&
operator<<(ostream& os, pair<T, U> P) {
    os << "(" << P.first << ", " << P.second;
    return os << ")";
    /*prints std::pair*/
}

template <typename T, typename U>
ostream&
operator<<(ostream& os, map<T, U> V) {
    os << "{ ";
    for(auto v: V) os << v << " ";
    os << "}"; return os;
    /*prints std::map*/
}

template <typename T, typename U>
ostream&
operator<<(ostream& os, multimap<T, U> V) {
    os << "{ ";
    for(auto v: V) os << v << " ";
    os << "}"; return os;
    /*prints std::multimap*/
}

#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg>
void
__f(const char* name, Arg&& arg) {
    cout << name << ": " << arg << '\n';
}

template <typename Arg1, typename... Args>
void
__f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names+1, ',');
    cout.write(names, comma-names) << ": "
        << arg1 << " |"; __f(comma+1, args...);
}

#endif // CP_TRACE_HPP
