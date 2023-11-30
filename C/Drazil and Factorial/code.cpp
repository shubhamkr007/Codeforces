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
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,string> mp;

    mp['0']= mp[1]="";
    mp['2']="2";
    mp['3']="3";
    mp['4']="223";
    mp['5']="5";
    mp['6']="35";
    mp['7']="7";
    mp['8']="2227";
    mp['9']="2337";


    string ans;
    for(int i=0;i<n;i++){
        ans+=mp[s[i]];
    }

    sort(ans.rbegin(),ans.rend());

    cout<<ans;
    return 0;
}

