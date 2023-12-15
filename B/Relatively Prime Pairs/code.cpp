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
    ll l,r;
    cin>>l>>r;

    vector<pair<ll,ll>> ans;
    for(ll i=l;i<=r;i=i+2){
        ans.push_back({i,i+1});
    }

    cout<<"YES"<<endl;
    for(auto x: ans){
        cout<<x.fr<<" "<<x.sc<<endl;
    }
    return 0;
}

// 1 2 3 4 5 6 7 8

