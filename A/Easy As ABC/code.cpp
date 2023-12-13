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


void dfs(string&  ans, vector<string>& s, int i, int j, string temp,vector<vector<int>> vis){
    if(temp.length() == 3){
        ans=min(ans,temp);
        return;
    }

    if(i< 0 ||  j< 0 || i>2 || j>2 || vis[i][j]){
        return;
    }
    
    vis[i][j]=1;

    temp.push_back(s[i][j]);

    dfs(ans,s,i,j+1,temp,vis);
    dfs(ans,s,i-1,j+1,temp,vis);
    dfs(ans,s,i-1,j,temp,vis);
    dfs(ans,s,i-1,j-1,temp,vis);
    dfs(ans,s,i,j-1,temp,vis);
    dfs(ans,s,i+1,j-1,temp,vis);
    dfs(ans,s,i+1,j,temp,vis);
    dfs(ans,s,i+1,j+1,temp,vis);
}

int main()
{
    vector<string> s(3);
    for(int i=0;i<3;i++){
        cin>>s[i];
    }

    string ans="ZZZ";
    vector<vector<int>> vis(3,vector<int> (3,0)) ;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            dfs(ans, s, i,j,"",vis);
        }
    }

    

    cout<<ans;

    return 0;
}

