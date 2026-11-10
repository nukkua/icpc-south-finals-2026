#include <bits/stdc++.h>
using namespace std;

#define fastio() \
    ios::sync_with_stdio(false); \
    cin.tie(0); \

using vi = vector<int>;

signed main() {
    int n, m;
    cin >> n >> m;
    vi time(m), cnt(n, 0), who(n, -1);
    for(int i = 0; i < m; i++) {
        cin >> time[i];
        time[i]--;
    }

    // se -> the sender
    // re -> the receiver
    // in the time[i] that is the sender of the message
    // there are only n person to send

    for(int i = 0; i < m; i++) {
        int se = time[i];
        int re = -1;

        if (who[se] == -1) re = (se + 1) % n;
        else re = who[se];

        cnt[re]++;
        who[re] = se;
    }
    for(const auto &x: cnt) cout << x << " ";
    cout << endl;
}
