#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<set>
#include<math.h>
#include<map>
#include<stack>
#include<sstream>
#include<queue>
#include<list>
#include<iomanip>
#include<bitset>
#include<limits.h>
#include<numeric> 
#define INF  -1
#define MOD  1000000007
#define BIG  1000000007
#define ii pair<int,int>
#define iii pair<int,pair<int,int> >
#define MP(a,b) make_pair(a,b)
#define fr first
#define sc second
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    priority_queue<pair<int,int>>  pq;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
        if(nums[i]<0){
            pq.push({-1*nums[i],i});
        }
    }


    while(k != 0 && !pq.empty()){
        nums[pq.top().second]=-1*nums[pq.top().second];
        pq.pop();
        k--;
    }

    int sum=0;
    sum=accumulate(nums.begin(),nums.end(),sum);

    if(k > 0 && k%2 != 0){
        int mini=*min_element(nums.begin(),nums.end());
        sum -= mini;
        sum += mini*-1;
    }   

    cout<<sum;


    return 0;
}

