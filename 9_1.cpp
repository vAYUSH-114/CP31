#include <bits/stdc++.h>
using namespace std;

bool onLine(int xk, int yk, int xq, int yq, int cx, int cy)
{
    // finding slope and getting that cx and cy on the line or not?

    return (yq - yk) * (cx - xk) == (cy - yk) * (xq - xk);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        vector<pair<int, int>> vk(8);
        vector<pair<int, int>> vq(8);
        vk[0] = {a + xk, b + yk};
        vk[1] = {a + xk, yk - b};
        vk[2] = {xk - a, b + yk};
        vk[3] = {xk - a, yk - b};
        vk[4] = {b + xk, a + yk};
        vk[5] = {b + xk, yk - a};
        vk[6] = {xk - b, a + yk};
        vk[7] = {xk - b, yk - a};

        vq[0] = {a + xq, b + yq};
        vq[1] = {a + xq, yq - b};
        vq[2] = {xq - a, b + yq};
        vq[3] = {xq - a, yq - b};
        vq[4] = {b + xq, a + yq};
        vq[5] = {b + xq, yq - a};
        vq[6] = {xq - b, a + yq};
        vq[7] = {xq - b, yq - a};

        // vq[0] = {a + xq, b + yq};
        // vq[1] = {a + xq, b - yq};
        // vq[2] = {a - xq, b + yq};
        // vq[3] = {a - xq, b - yq};
        // vq[4] = {b + yq, a + xq};
        // vq[5] = {b + yq, a - xq};
        // vq[6] = {b - yq, a + xq};
        // vq[7] = {b - yq, a - xq};

        int cx, cy;
        bool found = false;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (vk[i].first == vq[j].first && vk[i].second == vq[j].second)
                {
                    found = true;
                    cx = vk[i].first;
                    cy = vk[i].second;
                    break;
                }
            }
            if (found)
            {
                break;
            }
        }

        if (found)
        {
            if (onLine(xk, yk, xq, yq, cx, cy))
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }

        // for (int j = 0; j < 8; j++)
        // {
        //     cout << vk[j].first << " " << vk[j].second << endl;
        // }
        // cout << "------------------" << endl;
        // for (int j = 0; j < 8; j++)
        // {
        //     cout << vq[j].first << " " << vq[j].second << endl;
        // }
    }
    return 0;
}