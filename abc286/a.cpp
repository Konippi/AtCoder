#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
ll MOD = 998244353;
ll INF = 1LL << 60;
double PI = 3.14159265359;

int main(void) {
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    p--;
    q--;
    r--;
    s--;
    vector<int> a1, a2, pre, mid, after;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (i < p) {
            pre.push_back(a);
        } else if (p <= i && i <= q) {
            a1.push_back(a);
        } else if (r <= i && i <= s) {
            a2.push_back(a);
        } else if (s < i) {
            after.push_back(a);
        } else {
            mid.push_back(a);
        }
    }
    for (auto k : pre) {
        cout << k << " ";
    }
    for (auto k : a2) {
        cout << k << " ";
    }
    for (auto k : mid) {
        cout << k << " ";
    }
    for (auto k : a1) {
        cout << k << " ";
    }
    for (auto k : after) {
        cout << k << " ";
    }

    return 0;
}