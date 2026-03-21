#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        int odd = 0;
        for (int f : freq) if (f % 2) odd++;

        int remaining = n - k;
        if (remaining % 2 == 0) {
            cout << (odd <= k ? "YES" : "NO") << endl;
        } else {
            cout << (odd <= k + 1 ? "YES" : "NO") << endl;
        }
    }
    return 0;
}