#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int t;
    int hi=1073741823;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int maxi = INT_MIN;
        vector<vector<int>> mat(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
                maxi = max(mat[i][j], maxi);
            }
        }

        vector<int> result(n);
        for (int i = 0; i < n; i++)
        {
            int val = (1LL << 30) -1;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    val &= mat[i][j];
                }
            }
            result[i] = val;
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && (result[i] | result[j]) != mat[i][j])
                {
                    flag = false;
                    break;
                }
            }
            if (!flag)
                break;
        }

        if (flag)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << result[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}