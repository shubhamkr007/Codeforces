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


int solve(int n,int m){
    if(m <= n) return n-m;
    int count=0;

    while(m >  n ){
        if(m%2==1){  m+=1; count++;}
        count++;
        m/=2;
    }

    return n-m + count;
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<solve(n,m);
    return 0;
}

