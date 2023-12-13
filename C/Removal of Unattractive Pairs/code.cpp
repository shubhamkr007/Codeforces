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
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        map<char, ll> m;
        vector<ll> v;
        for (ll j = 0; j < n; j++)
            m[s[j]]++;
        for (auto it : m)
            v.push_back(it.second);
        sort(v.begin(), v.end(), greater<ll>());
        ll sum = 0;

        for (ll j = 1; j < v.size(); j++)
            sum += v[j];
        

        if (v[0] >= sum) //frequrncy of highest occuring element is greater then sum of frequencyother characters
            cout << v[0] - sum << endl;
        else    //if total sum is odd or even
            cout << (sum + v[0]) % 2 << endl;
    }
    
    return 0;
}

