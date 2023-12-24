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
    string a,b,c;
    cin>>a>>b>>c;
    vector<int> temp1(26,0);
    vector<int> temp2(26,0);

    for(auto x: a){
        temp1[x-'A']++;
    }
    for(auto x: b){
        temp1[x-'A']++;
    }
    for(auto x: c){
        temp2[x-'A']++;
    }

    for(int i=0;i<26;i++){
        if(temp1[i]!= temp2[i]){
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    return 0;
}

