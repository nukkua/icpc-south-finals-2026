#include <bits/stdc++.h>

using namespace std;

#define fastio() \
    ios::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0); \

signed main() {
    string s; cin >> s;
    int ones = count(s.begin(), s.end(), '1');
    int zeroes = (int)s.size() - ones;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i = 0; i < (int)s.size(); i++) {
        if (i & 1) s[i] ^= 1;
        swap(ones, zeroes);

        int delta = (s[i] == '1' ? +1 : -1);
        ones += delta;
        zeroes -= delta;
        maxi = max(maxi, ones);
        mini = min(mini, ones);
    }

    cout << mini << " " << maxi << endl;
}

