#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
ll MOD = 998244353;
ll INF = 1LL << 60;
double PI = 3.14159265359;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 0; i <= n; i++) {
        a[i] = i;
    }
    reverse(a.begin(), a.end());
    for (auto k : a) {
        cout << k << endl;
    }

    return 0;
}