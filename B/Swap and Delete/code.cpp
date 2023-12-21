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
        string s;
        cin>>s;

        int one=0;
        int zero=0;
        for(auto x: s){
            if(x=='1')
                one++;
            else
                zero++;
        }

        int ans=0;

        int i=0;
        for(auto x: s){
            if(x=='0'){
                if(one <= 0){
                    ans=s.length()-i;
                    break;
                }
                one--;
            }
            else{
                if(zero<=0){
                    ans=s.length()-i;
                    break;
                }
                zero--;
            }
            i++;
        }

        cout<<ans<<endl;
    }
    return 0;
}

