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
        ll k,x;
        cin>>k>>x;

        ll res= 9*(k-1) + x;
        cout<<res<<endl;
    }
    return 0;
}

