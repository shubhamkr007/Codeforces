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
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll> ans;
    for(int i=0;i<n;i++){
        ll z;
        cin>>z;
        int temp=(a*z) % b/a;
        ans.push_back(temp);
    }

    for(auto x: ans){
        cout<<x<<" ";
    }
    return 0;
}

