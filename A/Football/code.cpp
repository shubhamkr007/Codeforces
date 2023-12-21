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
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        mp[s]++;
    }

    int curr = 0;
    string ans;
    for (auto x : mp)
    {
        if (curr < x.sc)
        {
            curr = x.sc;
            ans = x.fr;
        }
    }
    cout << ans << endl;
    return 0;
}
