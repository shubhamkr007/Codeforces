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
        string s;
        cin>>s;
        
        int res=0;
        int count=0;

        for(int i=n-1;i>=0;i--){
            if(s[i]=='B'){
                count++;
            }
            else{
                res+=count;
                if(count){
                    s[i]='B';
                    count=0;
                    i++;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}

