#ifndef CP_TRACE_HPP
#define CP_TRACE_HPP

#include <type_traits>
#include <iostream>
#include <utility>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <cstring>
#include <chrono>

template <typename T, std::size_t S>
std::ostream&
operator<<(std::ostream& os, std::array<T, S> A) {
    os << "[ ";
    for (auto a: A) os << a << " ";
    os << "]"; return os;
    /* prints std::array */
}

template <typename T>
std::ostream&
operator<<(std::ostream& os, std::vector<T> V) {
    os << "[ ";
    for (auto v: V) os << v << " ";
    os << "]"; return os;
    /* prints std::vector */
}

template <typename T>
std::ostream&
operator<<(std::ostream& os, std::deque<T> D) {
    os << "[ ";
    for (auto d: D) os << d << " ";
    os << "]"; return os;
    /* prints std::deque */
}

template <typename T>
std::ostream&
operator<<(std::ostream& os, std::list<T> L) {
    os << "[ ";
    for (auto l: L) os << l << " ";
    os << "]"; return os;
    /* prints std::list */
}

template <typename T>
std::ostream&
operator<<(std::ostream& os, std::set<T> S) {
    os << "[ ";
    for (auto s: S) os << s << " ";
    os << "]"; return os;
    /* prints std::set */
}

template <typename T>
std::ostream&
operator<<(std::ostream& os, std::multiset<T> S) {
    os << "[ ";
    for (auto s: S) os << s << " ";
    os << "]"; return os;
    /* prints std::multiset */
}

template <typename T, typename U>
std::ostream&
operator<<(std::ostream& os, std::pair<T, U> P) {
    os << "(" << P.first << ", " << P.second;
    return os << ")";
    /* prints std::pair */
}

template <typename T, typename U>
std::ostream&
operator<<(std::ostream& os, std::map<T, U> M) {
    os << "{ ";
    for (auto m: M) os << m << " ";
    os << "}"; return os;
    /* prints std::map */
}

template <typename T, typename U>
std::ostream&
operator<<(std::ostream& os, std::multimap<T, U> M) {
    os << "{ ";
    for (auto m: M) os << m << " ";
    os << "}"; return os;
    /* prints std::multimap */
}

template <typename T>
std::ostream&
operator<<(std::ostream& os, std::unordered_set<T> S) {
    os << "[ ";
    for (auto s: S) os << s << " ";
    os << "]"; return os;
    /* prints std::unordered_set */
}

template <typename T>
std::ostream&
operator<<(std::ostream& os, std::unordered_multiset<T> S) {
    os << "[ ";
    for (auto s: S) os << s << " ";
    os << "]"; return os;
    /* prints std::unordered_multiset */
}

template <typename T, typename U>
std::ostream&
operator<<(std::ostream& os, std::unordered_map<T, U> M) {
    os << "{ ";
    for (auto m: M) os << m << " ";
    os << "}"; return os;
    /* prints std::unordered_map */
}

template <typename T, typename U>
std::ostream&
operator<<(std::ostream& os, std::unordered_multimap<T, U> M) {
    os << "{ ";
    for (auto m: M) os << m << " ";
    os << "}"; return os;
    /* prints std::unordered_multimap */
}

#define trace(...) __trace(#__VA_ARGS__, __VA_ARGS__)
#define debug(...) __rdebug(__VA_ARGS__)

template <typename Arg>
void
__rdebug(Arg&& arg) {
    cerr << arg << '\n';
}
template <typename Arg1, typename... Args>
void
__rdebug(Arg1&& arg1, Args... args) {
    cerr << arg1 << " ";
    __rdebug(args...);
}

#if __cplusplus >= 201703L
#define BENCHMARK(func, ...) __time_it(#func, func, ##__VA_ARGS__)
template <typename Func, typename... Args>
void
__time_it(const char*name, Func&& func,  Args&&... args) {
    // make sure argument is callable available with C++17
    static_assert(std::is_invocable<Func, Args...>::value);

    debug("[DEBUG] executing function", name);
    auto start = std::chrono::high_resolution_clock::now();
    func(args...);
    auto end = std::chrono::high_resolution_clock::now();
    debug("[DEBUG] execution completed...");
    auto time_elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    debug("[DEBUG] time required:", time_elapsed.count(), "us");
}
#else
#define BENCHMARK(func, ...) func()
#endif // __cplusplus >= 201703L

template <typename Arg>
void
__trace(const char* name, Arg&& arg) {
    cout << name << ": " << arg << '\n';
}

template <typename Arg1, typename... Args>
void
__trace(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names+1, ',');
    cout.write(names, comma-names) << ": "
        << arg1 << " |"; __trace(comma+1, args...);
}

#endif // CP_TRACE_HPP
