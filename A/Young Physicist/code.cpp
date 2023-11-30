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
    int t;
    cin>>t;
    int x=0;
    int y=0;
    int z=0;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        x+=c;
    }

    if(x==0 && y==0 && z==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";


    return 0;
}

