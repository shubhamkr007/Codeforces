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
        vector<long long> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            v[i] += v[i - 1];
        }
        vector<int> div;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                div.push_back(i);
                if (i != n / i)
                {
                    div.push_back(n / i);
                }
            }
        }
        long long ans = 0;
        for (int it : div)
        {
            long long mn = LLONG_MAX, mx = 0;
            for (int i = it; i <= n; i += it)
            {
                mn = min(mn, v[i] - v[i - it]);
                mx = max(mx, v[i] - v[i - it]);
            }
            ans = max(ans, mx - mn);
        }
        cout << ans << endl;
    }
    return 0;
}