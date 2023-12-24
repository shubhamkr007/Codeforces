#include <bits/stdc++.h>
#define INF -1
#define MOD 1000000007
#define BIG 1000000007
#define ll long long
#define ii pair<int, int>
#define iii pair<int, pair<int, int>>
#define MP(a, b) make_pair(a, b)
#define fr first
#define sc second
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;

        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] != '#' && s[i - 1] == '.' && s[i + 1] == '.')
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << 2 << endl;
            continue;
        }
        int count = 0;
        for (auto x : s)
        {
            if (x == '.')
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
