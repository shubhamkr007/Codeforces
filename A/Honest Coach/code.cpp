#include <bits/stdc++.h>
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
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        sort(nums.begin(),nums.end());

        int ans= BIG;
        for(int i=1;i<n;i++){
            ans= min(ans, nums[i]-nums[i-1]);
        }

        cout<<ans<<endl;
    }
    return 0;
}

