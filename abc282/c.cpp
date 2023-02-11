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
    bool replace = true;
    int num = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '\"') {
            num++;
            if (num % 2 == 1)
                replace = false;
            else
                replace = true;
        }
        if (replace && s[i] == ',') {
            s[i] = '.';
        }
    }
    cout << s << endl;

    return 0;
}