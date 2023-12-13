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
    ll n,b,s;
    cin>>n>>b>>s;
    vector<ll> bus(n);
    for(int i=0;i<n;i++){
        cin>>bus[i];
    }

    ll x,y;
    cin>>x>>y;

    float curr = BIG;

    ll ans=0;

    for(int i=0;i<n;i++){
        float byBus= sqrt(bus[i] * bus[i]);
        float byStudent= sqrt(((x-bus[i])*(x-bus[i])) + (y*y));

        float timeBus= byBus / b;
        float timeStudent= byStudent / s;

        cout<<timeBus <<" "<< timeStudent <<" "<< curr<<endl;
        cout<<byBus <<" "<< byStudent<<endl;

        if(timeBus + timeStudent <= curr){
            ans=i+1;
            curr=timeBus+timeStudent;
        }
    }
    cout<<ans;
    return 0;
}

