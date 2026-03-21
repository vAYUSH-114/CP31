#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        // vector<int> v(n);
        int i;
        bool is = true;
        for (i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == k)
            {
                is = false;
            }
        }
        if (is)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}