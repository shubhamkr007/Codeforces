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


ll maxSubArr(vector<ll>&arr, int left, int right) {
    ll maxi = LLONG_MIN, max_ending=0;
    for (int i=left; i<=right; i++) {
        max_ending = max_ending + arr [i] ;
        if (maxi < max_ending){
            maxi=max_ending;
        }
        if(max_ending < 0){
            max_ending=0;
        }
    }
    return maxi;
}



int main()
{

    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int prev=0;
        ll ans=LLONG_MIN;

        for(int i=0;i<n;i++){
            if(abs(v[i]%2)==abs(v[i]%2)){
                ans=max(ans,maxSubArr(v,prev,i-1));
                prev=i;
            }
        }

        ans=max(ans,maxSubArr(v,prev, n-1));
        cout<<"--"<<ans<<endl;

    }

    return 0;
}

