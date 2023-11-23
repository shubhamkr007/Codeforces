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
    while(t--){
        int n;
        cin>>n;
        if((n-1 )% 3 ==0 || (n+1) %3==0){
            cout<<"First"<<endl;
        }
        else
            cout<<"Second"<<endl;
    }
    return 0;
}

