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
        int f=0;
        for(int i=1;i<=s.length()/2;i++){
            string a=s.substr(0,i);
            string b=s.substr(i);
            if(b[0]=='0')    continue;
            
            int temp1=stoi(a);
            int temp2=stoi(b);
            if(temp2 > temp1){
                cout<<a<<" "<<b<<endl;
                f=1;
            }
            if(f==1)
                break;
        }
        if(!f)
            cout<<-1<<endl;
    }
    return 0;
}

