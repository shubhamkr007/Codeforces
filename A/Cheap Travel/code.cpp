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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int temp = 0;
    int cost1 = 0;
    while (n > temp)
    {
        temp += m;
        cost1 += b;
    }
    int cost3 = cost1;

    if (n < temp)
    {
        temp -= m;
        cost1 -= b;
        while (n > temp)
        {
            temp += 1;
            cost1 += a;
        }
    }

    int cost2 = n * a;

    cout << min(cost1, min(cost2, cost3));

    return 0;
}
