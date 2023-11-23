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


ll fun(vector<int>& nuts,int n){

    if(*max_element(nuts.begin(), nuts.end()) ==0)
        return 0;
    int i=0;
    int j=n-1;

    for(i=0;i<n;i++){
        if(nuts[i]==1)
            {
                break;
            }
    }
    
    for(j=n-1;j>=0;j--){
        if(nuts[j]==1)
            {
                break;
            }
    }

    if(i==j)    return 1;

    vector<int> temp;

    int t=0;
    while(i<=j){
        if(nuts[i]==0){
            t++;
        }
        else{
            if(t!=0){
                temp.push_back(t+1);
            }
            t=0;
        }
        i++;
    }

    ll ans=1;

    for(auto x: temp){
        ans*=x;
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> nuts(n);

    for(int i=0;i<n;i++){
        cin>>nuts[i];
    }

    cout<<fun(nuts,n);

    return 0;
}

