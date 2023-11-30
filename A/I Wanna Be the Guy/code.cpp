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
    vector<int> hash(n+1,0);

    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        hash[x]=1;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        hash[x]=1;
    }

    for(int i=1;i<n+1;i++){
        if(hash[i]==0)
            {
                cout<<"Oh, my keyboard!"<<endl;
                return 0;
            }

    }

    cout<<"I become the guy."<<endl;

    
    return 0;
}

