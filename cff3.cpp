#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long i = 0;
        long long ans = -1;
        for (long long i = 1; i < n; i++)
        {
            cout << "? " << 2 * i + 1 << " " << 2 * i + 2 << endl;
            cout.flush();
            long long s;
            cin >> s;
            if (s == -1)
            {
                return 0;
            }
            if (s)
            {
                ans = 2 * i + 1;
                break;
            }

            // i += 2;
        }

        if (ans == -1)
        {
            cout << "? 1 3" << endl;
            cout.flush();
            long long s;
            cin >> s;
            if (s == -1)
                return 0;

            if (s == 1)
            {
                ans = 1;
            }
            else
            {
                cout << "? 1 4" << endl;
                cout.flush();
                cin >> s;
                if (s == -1)
                    return 0;

                if (s == 1)
                {
                    ans = 1;
                }
                else
                {
                    ans = 2;
                }
            }
        }
        cout << "! " << ans << endl;
        cout.flush();
    }
    return 0;
}