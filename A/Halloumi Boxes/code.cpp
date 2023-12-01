#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
 
        if(k==1 && !is_sorted(nums.begin(),nums.end())){
            cout<<"NO\n";
        }
        else    cout<<"YES\n";
    }
    return 0;
}