#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
ll MOD = 998244353;
ll INF = 1LL << 60;
double PI = 3.14159265359;

int main(void) {
    string s;
    cin >> s;
    long double all_a = 1;
    long double alphabet = 26;
    for (long double i = 1; i < s.size(); i++) {
        all_a += powl(alphabet, i);
    }
    reverse(s.rbegin(), s.rend());
    long double ans = all_a;
    for (long double i = 0; i < s.size(); i++) {
        long double diff = s[i] - 'A';
        ans += diff * powl(alphabet, i);
    }
    cout << setprecision(17) << ans;

    return 0;
}