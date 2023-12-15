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
    double n,t,k,d;
    cin>>n>>t>>k>>d;

    int g = (n + k-1)/k;
        
        int o1 = 0, o2 = d;
        for(int i=0; i<g; i++) {
            if(o1 <= o2) o1 += t;
            else o2 += t;
        }
        
        if(max(o1,o2) < g*t) cout<<"YES";
        else cout<<"NO";

    return 0;
}

