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
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;

        ll Xa,Xb;
        ll Ya,Yb;
        cin>>Xa>>Ya;
        cin>>Xb>>Yb;

        set<pair<int,int>> st1,st2;

        st1.insert({Xa-a, Ya-b});
        st1.insert({Xa+a, Ya-b});
        st1.insert({Xa-a, Ya+b});
        st1.insert({Xa+a, Ya+b});

        st1.insert({Xa-b, Ya-a});
        st1.insert({Xa+b, Ya-a});
        st1.insert({Xa-b, Ya+a});
        st1.insert({Xa+b, Ya+a});

        st2.insert({Xb-a, Yb-b});
        st2.insert({Xb+a, Yb-b});
        st2.insert({Xb-a, Yb+b});
        st2.insert({Xb+a, Yb+b});

        st2.insert({Xb-b, Yb-a});
        st2.insert({Xb+b, Yb-a});
        st2.insert({Xb-b, Yb+a});
        st2.insert({Xb+b, Yb+a});

        int count=0;
        for(auto x: st1){
            if(st2.find(x)!=st2.end())
                count++;
        }

        cout<<count<<endl;

    }
    return 0;
}

