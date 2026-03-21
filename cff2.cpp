#include <bits/stdc++.h>
using namespace std;
long long binarySearch(vector<long long> &arr, long long target)
{
    long long low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (long long i = 0; i < n; i++)
        {
            vector<long long> temp(v.begin() + i, v.end());
            long long c = v[i];
            sort(temp.begin(), temp.end());
            long long index = binarySearch(temp, c);
            if (index != -1)
            {
                long long val = index;
                while (temp[val] == temp[val - 1])
                    val--;

                long long small = val;
                val = index;
                while (temp[val] == temp[val + 1])
                    val++;

                long long big = temp.size() - val - 1;
                cout << (small < big ? big : small) << " ";
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}