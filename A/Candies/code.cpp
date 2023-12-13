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
        long long n;
        cin>>n;

        long long temp=1;

        int i=1;
        while(true){
            if(n% temp == 0 && temp!=1)
                break;
            temp+=(1<<i);
            i++;
        }

        cout<<n/temp<<endl;
    }
    return 0;
}

