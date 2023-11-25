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

int solve(string s){
    int count=0;
    int i=0;
    int j=0;

    for(int i=0;i<s.length()-1;i++){

        if(s.substr(i,2)=="AB"){
            count++;
            s[i]=='B';
            s[i+1]='A';

            for(int k=0;k<i-1;k+j){
                if(s.substr(k,2)=="AB"){
                    count++;
                    s[k]='B';
                    s[k+1]='A';
                }
            }
            j=i+1;
        }
    }
}

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        // cout<<solve(s)<<endl;
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

