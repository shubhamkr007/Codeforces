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
    int n,a,b;
    cin>>n>>a>>b;

    unordered_set<double> st;
    int flag=0;

    for(ll i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(y==b)    flag=1;
        else{
            double slope= (double)(a-x)/(b-y);
            st.insert(slope);
        }
    }

    cout<< st.size()+flag;
    return 0;
}

