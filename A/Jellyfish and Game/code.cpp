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
    ll t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;

        vector<int> J(n);
        vector<int> G(m);

        for(int i=0;i<n;i++){
            cin>>J[i];
        }

        for(int i=0;i<m;i++){
            cin>>G[i];
        }

        sort(J.begin(),J.end());
        sort(G.begin(),G.end());

        if(k%2==0){
            if(J[0] < G[m-1]){
                swap(J[0] , G[m-1]);
                sort(J.begin(),J.end());
                sort(G.begin(),G.end());
            }

            if(G[0] < J[n-1]){
                swap(G[0] , J[n-1]);
            }
        }
        else{
            if(J[0] < G[m-1]){
                swap(J[0] , G[m-1]);
            }
        }

        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=J[i];
        }

        cout<<sum<<endl;
    }
    return 0;
}

