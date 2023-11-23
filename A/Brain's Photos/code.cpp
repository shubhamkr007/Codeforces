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
    int n,m;
    cin>>n>>m; 
    unordered_set<char> st={'C', 'M', 'Y',};
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c;cin>>c;;
            if(st.find(c)!=st.end())    flag=1;
        }
    }

    if(flag){
        cout<<"#Color";
    }
    else{
        cout<<"#Black&White";
    }
    return 0;
}

