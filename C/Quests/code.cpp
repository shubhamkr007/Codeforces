#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];

        int ans = 0, sans = 0, maxi = 0;

        for (int i = 0; i < n; i++)
        {
            if (k == i)
                break;

            ans += a[i];
            maxi = max(maxi, b[i]);
            sans = max(ans + (k - i - 1) * maxi, sans);
        }
        cout << sans << endl;
    }

    return 0;
}
