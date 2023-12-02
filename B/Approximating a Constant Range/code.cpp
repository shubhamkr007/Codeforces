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
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int i=0;
    int j=0;
    int count=1;

    multiset<int> st;

    while(j<n){

        st.insert(nums[j]);

        int mx=*st.rbegin();
        int mi=*st.begin();

        while(mx-mi > 1){
            st.erase(st.find(nums[i]));
            i++;
            mi=*st.begin();
            mx=*st.rbegin();  
        }

        count=max(count,j-i+1);

        j++;
    }
    

    cout<<count;
    return 0;
}

