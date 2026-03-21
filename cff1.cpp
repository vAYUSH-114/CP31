#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, c, k;
        cin >> n >> c >> k;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (long long i = 0; i < n; i++)
        {
            if (v[i] <= c)
            {
                long long diff = c - v[i];
                if (diff < k)
                {
                    c += diff;
                    k -= diff;
                }
                else
                {
                    c += k;
                    k = 0;
                }
                c = c + v[i];
            }
            else
            {
                break;
            }
        }
        cout << c << endl;
    }
    return 0;
}