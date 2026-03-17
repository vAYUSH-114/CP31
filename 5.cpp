#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        int typ = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] != v[i])
                typ++;
        }
        if (typ == 1)
        {
            cout << "YES" << endl;
        }
        else if (typ == 2)
        {
            int cntForTyp1 = 0, cntForTyp2 = 0;
            int checkerFOrTyp1 = v[0];
            int checkerFOrTyp2 = v[n - 1];
            for (int i = 0; i < n; i++)
            {
                if (checkerFOrTyp1 == v[i])
                    cntForTyp1++;
                else if (checkerFOrTyp2 == v[i])
                    cntForTyp2++;
            }
            if (abs(cntForTyp1 - cntForTyp2) == 0 || abs(cntForTyp1 - cntForTyp2) == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}