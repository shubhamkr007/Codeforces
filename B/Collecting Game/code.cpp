#include<bits/stdc++.h>
#define INF  -1
#define MOD  1000000007
#define BIG  1000000007
#define ll  long long
#define ii pair<int,int>
#define iii pair<int,pair<int,int> >
#define MP(a,b) make_pair(a,b)
#define fr first
#define sc second
using namespace std;


int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int n;
        cin >> n;
        vector<ll> vec(n);
        for(int i=0;i<n;i++)    cin>>vec[i];
        vector<ll> temp = vec;

        sort(begin(temp), end(temp));

        vector<ll> prefixSum(n, 0);

        prefixSum[0] = temp[0];
        
        for(int i=1;i<n;i++)
            prefixSum[i] = temp[i] + prefixSum[i - 1];

        for (auto x : vec) {
            auto it = upper_bound(temp.begin(), temp.end(), x);

            if (it == temp.end()) {
                cout << n - 1 << " ";
                continue;
            } else {
                int answer = it - temp.begin() - 1;
                ll sum = prefixSum[answer];
                bool flag = true;
                while (flag) {
                    ll value = 2 * sum;
                    auto it2 = upper_bound(begin(prefixSum), end(prefixSum), value) - begin(prefixSum) - 1;
                    if (it2 == answer)
                        flag = false;
                    sum += prefixSum[it2] - prefixSum[answer];
                    answer = it2;
                }
                cout << answer << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

