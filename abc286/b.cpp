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
    string s;
    cin >> s;
    string ans = regex_replace(s, regex("na"), "nya");
    cout << ans << endl;

    return 0;
}