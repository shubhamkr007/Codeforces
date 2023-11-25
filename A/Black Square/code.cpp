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
    vector<int> a(4);
    cin>>a[0]>>a[1]>>a[2]>>a[3];

    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.length();i++){
        ans+= a[s[i]-'1'];
    }

    cout<<ans;
    return 0;
}

