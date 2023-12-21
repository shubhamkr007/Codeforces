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

void solution()
{
    int num, k;
    cin >> num >> k;

    int contest[num];

    for (int i = 0; i < k; ++i)
        contest[i] = i + 1;

    int val = num;
    for (int i = k; i < num; i++)
        contest[i] = val--;

    for (auto x : contest)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}