#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] = v[i] % k;
    }

    sort(v.begin(), v.end());
    mini = v[n - 1] - v[0];
    for (int i = 0; i < n; i++)
    {
        v[i] = v[i] + k;
        mini = min(mini, v[i] - v[(i + 1) % n]);
    }
    cout << mini;

    return 0;
}