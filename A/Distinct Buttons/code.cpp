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
        int n;
        cin>>n;
        set<int> st;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a>0){
                st.insert(1);
            }
            if(a<0){
                st.insert(2);
            }
            if(b>0){
                st.insert(3);
            }
            if(b<0){
                st.insert(4);
            }
            
        }

        if(st.size() == 4){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

