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
        string curr;
        cin>>curr;

        char temp=curr[0];

        int digit=curr[1]-'0';

        for(int i=1;i<=8;i++){
            if(i!= digit){
                cout<<temp<<i<<endl;
            }
        }

        for(char c='a';c<='h';c++){
            if(c!=temp)
                cout<<c<<digit<<endl;
        }
    }
    return 0;
}

