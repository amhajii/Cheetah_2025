#include <bits/stdc++.h>
using namespace std;


//===================== MACROS =====================
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl '\n'

// Loop shortcuts
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORD(i, a, b) for (int i = (a); i >= (b); i--)
#define REP(i, n) FOR(i, 0, n)
#define FORE(i, x) for (auto &i : (x))

// Debugging (disable in contest)
#ifdef DEBUG
#define debug(x) cerr << #x << " = " << (x) << '\n'
#else
#define debug(x)
#endif


//===================== CONSTANTS =====================
const int INF = 1e9 + 7;
const long long LINF = 1e18 + 7;
const double EPS = 1e-9;
const int MOD = 1e9 + 7;
const int dx[] = {0, 1, 0, -1, 1, 1, -1, -1};
const int dy[] = {1, 0, -1, 0, 1, -1, 1, -1};

//===================== FAST I/O =====================
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

//===================== NUMBER THEORY =====================
// GCD & LCM
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

// Modular Exponentiation
ll mod_exp(ll base, ll exp, ll mod) {
    ll res = 1;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

// Modular Inverse (Fermat's little theorem)
ll mod_inv(ll a, ll mod) {
    return mod_exp(a, mod - 2, mod);
}



//===================== DATA STRUCTURES =====================
// Disjoint Set Union (DSU)
struct DSU {
    vector<int> parent, rank;
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        iota(all(parent), 0);
    }
    int find(int v) {
        return parent[v] == v ? v : parent[v] = find(parent[v]);
    }
    bool unite(int a, int b) {
        a = find(a), b = find(b);
        if (a == b) return false;
        if (rank[a] < rank[b]) swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b]) rank[a]++;
        return true;
    }
};

// Fenwick Tree (Binary Indexed Tree)
struct FenwickTree {
    vector<int> tree;
    FenwickTree(int n) : tree(n + 1, 0) {}
    void update(int idx, int delta) {
        for (++idx; idx < sz(tree); idx += idx & -idx)
            tree[idx] += delta;
    }
    int query(int idx) {
        int res = 0;
        for (++idx; idx > 0; idx -= idx & -idx)
            res += tree[idx];
        return res;
    }
    int range_query(int l, int r) {
        return query(r) - query(l - 1);
    }
};

// Segment Tree with Lazy Propagation
struct LazySegmentTree {
    vector<int> tree, lazy;
    int n;
    LazySegmentTree(int size) {
        n = 1;
        while (n < size) n <<= 1;
        tree.assign(2 * n, 0);
        lazy.assign(2 * n, 0);
    }
    void push(int node) {
        if (lazy[node]) {
            tree[2 * node] += lazy[node];
            tree[2 * node + 1] += lazy[node];
            lazy[2 * node] += lazy[node];
            lazy[2 * node + 1] += lazy[node];
            lazy[node] = 0;
        }
    }
    void update(int l, int r, int val, int node = 1, int start = 0, int end = -1) {
        if (end == -1) end = n - 1;
        if (r < start || end < l) return;
        if (l <= start && end <= r) {
            tree[node] += val;
            lazy[node] += val;
            return;
        }
        push(node);
        int mid = (start + end) / 2;
        update(l, r, val, 2 * node, start, mid);
        update(l, r, val, 2 * node + 1, mid + 1, end);
        tree[node] = max(tree[2 * node], tree[2 * node + 1]);
    }
    int query(int l, int r, int node = 1, int start = 0, int end = -1) {
        if (end == -1) end = n - 1;
        if (r < start || end < l) return -INF;
        if (l <= start && end <= r) return tree[node];
        push(node);
        int mid = (start + end) / 2;
        return max(query(l, r, 2 * node, start, mid),
                  query(l, r, 2 * node + 1, mid + 1, end));
    }
};


//===================== UTILITY FUNCTIONS =====================
// String to number conversion
template<typename T>
T ston(const string &s) {
    stringstream ss(s);
    T res;
    ss >> res;
    return res;
}

// Check if number is prime (for small numbers)
bool is_prime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

// Binary search (returns first occurrence)
template<typename T>
int bin_search(const vector<T> &arr, T target) {
    int low = 0, high = sz(arr) - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}

//===================== MAIN TEMPLATE =====================
int main() {
    fast_io();
    
    // YOUR CODE HERE
    
    return 0;
}