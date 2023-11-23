#include <iostream>
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
#include<numeric>
#include<limits.h>
#define INF  -1
#define MOD  1000000007
#define BIG  1000000007
#define ii pair<int,int>
#define iii pair<int,pair<int,int> >
#define MP(a,b) make_pair(a,b)
#define fr first
#define sc second
#define ll long long
using namespace std;


int main()
{
    string str;
    cin>>str;
    ll b,s,c;
    ll pb,ps,pc;
    cin>>b>>s>>c;
    cin>>pb>>ps>>pc;
    ll money;
    cin>>money;
    
    ll bread=0, sausage=0,cheese=0;
    for(auto x: str){
        if (x == 'B')
            bread++;
        else if(x=='S')
            sausage++;
        else
            cheese++;
    }

    ll low=0;
    ll high=money+200;

    while(low<=high){
        ll mid=low+(high-low)/2;

        ll r1=max((bread*mid) - b , (long long)0);
        ll r2=max((sausage*mid) - s , (long long)0);
        ll r3=max((cheese*mid) - c , (long long)0);

        ll price=(r1*pb) + (r2*ps) + (r3*pc);

        if(price <= money ) low=mid+1;
        else
            high= mid-1;

    }

    cout<<high;
    return 0;
}

