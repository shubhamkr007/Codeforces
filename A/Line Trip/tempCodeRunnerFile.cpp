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
    while(t--){
    int n, x;
    cin>>n>>x;
    int temp=0;
    int ans=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ans=max(ans, a-temp);
        // cout<<ans<<" ";
        temp=a;
    }

    ans=max(ans,2*(x-temp));

    cout<<ans;
    }

    return 0;
}

