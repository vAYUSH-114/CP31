#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        bool is = false;
        if (x.find(s) != string::npos)
        {
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;

        do
        {
            cnt++;
            x += x;
            n *= 2;
            if (x.find(s) != string::npos)
            {
                is = true;
                cout << cnt << endl;
                break;
            }
        } while (n < m * 2);
        if (is)
            continue;
        cout << -1 << endl;
    }

    return 0;
}