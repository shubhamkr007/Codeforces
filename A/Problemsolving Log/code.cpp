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
        string s;
        cin >> n >> s;

        vector<int> temp(26, 0);

        for (auto x : s)
        {
            temp[x - 'A']++;
        }

        int count = 0;

        for (int i = 0; i < 26; i++)
        {
            if (temp[i] == 0)
                continue;
            if (temp[i] >= i + 1)
                count++;
        }

        cout << count << endl;
    }
    return 0;
}
