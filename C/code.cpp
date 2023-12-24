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
    int n,m;
    cin>>n>>m;
    vector<int> nums(m);

    for(int i=0;i<m;i++){
        cin>>nums[i];
    }

    long long count=0;
    int low=1;
    for(int i=0;i<m;i++){
        if(low > nums[i]){
            count += n-(low - nums[i]);
        }  
        else{
            count += nums[i]-low;
        } 
        low = nums[i];
    }

    cout<<count;

    return 0;
}

