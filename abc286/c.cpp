#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
ll MOD = 998244353;
ll INF = 1LL << 60;
double PI = 3.14159265359;

ll n, a, b;

ll calc(string s, ll num) {
    int cnt = 0;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] == s[n - 1 - i])
            cnt++;
    }
    return a * num + b * ((n - cnt * (ll)2) / (ll)2);
}

int main(void) {
    cin >> n >> a >> b;
    string s;
    cin >> s;
    set<ll> point;
    for (ll i = 0; i < n - 1; i++) {
        point.insert(calc(s, i));
        rotate(s.begin(), s.begin() + 1, s.end());
    }
    cout << *point.begin() << endl;

    return 0;
}