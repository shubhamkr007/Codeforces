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
    int n, t;
    cin >> n >> t;
    vector<int> nums(n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        cin >> nums[i];
    }

    stack<int> st;
    int flag = false;
    st.push(0);
    while (!st.empty())
    {
        int curr = st.top();
        st.pop();
        if (curr == t - 1)
        {
            flag = true;
        }
        if (curr >= n - 1)
            break;
        st.push(curr + nums[curr]);
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
