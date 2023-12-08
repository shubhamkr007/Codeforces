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
        char c;
        cin>>n;
        cin>>c;
        
        string s;
        cin>>s;

        if(c=='g'){
            cout<<0<<endl;
            continue;
        }

        int first=-1;
        int ans=0;

        for(int i=0;i<n;i++){
            if(s[i]=='g'){
                first=i;
                break;
            }
        }

        for(int i=0;i<n;i++){
            if(s[i]==c){
                int count=0,flag=0;
                for(int j=i+1;j<n;j++){
                    count++;
                    if(s[j]=='g'){
                        flag++;
                        break;
                    }
                }

                i=i+count;

                if(flag){
                    ans=max(ans, count);
                }
                else{
                    ans=max(ans, count+1+first);
                }
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}

