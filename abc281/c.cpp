#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
ll MOD = 998244353;
ll INF = 1LL << 60;
double PI = 3.14159265359;

int main(void) {
    int n;
    ll t;
    cin >> n >> t;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    ll rest = t;
    ll ans1, ans2;
    if (t < sum) {
        for (int i = 0; i < n; i++) {
            if (rest >= a[i]) {
                rest -= a[i];
            } else {
                ans1 = i + 1;
                ans2 = rest;
                break;
            }
        }
    } else {
        rest -= sum * (t / sum);
        for (int i = 0; i < n; i++) {
            if (rest >= a[i]) {
                rest -= a[i];
            } else {
                ans1 = i + 1;
                ans2 = rest;
                break;
            }
        }
    }
    cout << ans1 << " " << ans2 << endl;

    return 0;
}