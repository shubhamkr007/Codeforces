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
    ll l,r;
    cin>>l>>r;

    if(r-l < 2){
        cout<<-1<<endl;
    }else{
        cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    }
    return 0;
}

