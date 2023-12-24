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

int solve(vector<ll>& nums,ll n){
    ll x=2;
    set<ll> st;
    while(x<=1e18){
        for (int i = 0; i < n; ++i) {
            st.insert(nums[i]%x);
        }

        if(st.size() == 2){
            return (int)x;
        }
        x= x*2;
        st.clear();
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin>>n;
        vector<ll> nums(n);

        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        cout<<solve(nums,n)<<endl;
    }
    return 0;
}

