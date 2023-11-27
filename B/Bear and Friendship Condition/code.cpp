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



void fun(int i, int& v,int& ed, vector<vector<int>>& mat, vector<bool>& vis ){
    vis[i]=true;
    v++;
    ed= ed + mat[i].size();

    for(int x: mat[i]){
        if(!vis[x]){
            fun(x,v,ed,mat,vis);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> mat(n);

    while(m--){
        int a,b;
        cin>>a>>b;
        mat[a-1].push_back(b-1);
        mat[b-1].push_back(a-1);
    }

    vector<bool> vis(n,false);

    for(int i=0;i<n;i++){
        if(vis[i]==false){
            int vertex=0;
            int edges=0;

            fun(i,vertex,edges,mat,vis);

            if(edges != (long long)vertex * (vertex-1)){
                cout<<"NO";
                return 0;
            }

        }
    }
    cout<<"YES";
    
    return 0;
}

