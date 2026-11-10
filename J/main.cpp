#include <bits/stdc++.h>

using namespace std;

#define fastio() \
    ios::sync_with_stdio(0); \
    cin.tie(0); \

using ll = long long;
signed main() {
    fastio();
    ll R, C;
    cin >> R >> C;
    if (R == 2 || C == 2 || (R == 3 && C == 3) || (R == 4 && C == 4)) cout << "*\n";
    else if (min(R, C) == 4) cout << "1 1\n";
    else if (R > C) cout << "1 2\n";
    else cout << "2 1\n";
        

}
