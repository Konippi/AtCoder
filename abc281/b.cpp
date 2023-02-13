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
    regex re("^[A-Z][1-9][0-9]{5}[A-Z]$");
    if (regex_search(s, re))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}