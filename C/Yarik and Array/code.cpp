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
    while(t--) {
        ll n,b,sum=0,maxi = INT_MIN,par=0;
        cin>>n;
        cin>>b;
        sum = b;
        par = abs(b)%2;
        maxi = sum;
        for( ll i = 1 ; i < n ; i++) {
            cin>>b;
            if(abs(b)%2 != par) {
                sum+=b;
            }
            else {
                sum = b;
            }
            if(b > sum) {
                sum = b;
            }
            par = abs(b)%2;
            maxi = max(sum,maxi);
        }
        cout<<maxi<<endl;
    }
    return 0;
    
}

