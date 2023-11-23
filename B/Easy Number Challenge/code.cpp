#include<bits/stdc++.h>
#define INF  -1
#define MOD  1000000007
#define BIG  1073741824
#define ll  long long
#define ii pair<int,int>
#define iii pair<int,pair<int,int> >
#define MP(a,b) make_pair(a,b)
#define fr first
#define sc second
using namespace std;


const int MAX_N = 1000005;

vector<int> numDivisors(MAX_N, 0);

void precalculateNumDivisors() {
    for (int i = 1; i < MAX_N; ++i) {
        for (int j = i; j < MAX_N; j += i) {
            numDivisors[j]++;
        }
    }
}


int main()
{
    precalculateNumDivisors();
    
    int a,b,c;
    cin>>a>>b>>c;

    ll ans=0;
    for(int i=1;i<=a;i++){
        for(int  j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                ans = ((ans%BIG) + numDivisors[i*j*k])%BIG;
            }
        }
    }

    cout<<ans;

    return 0;
}

