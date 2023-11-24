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
    int n,k;
    cin>>n>>k;
    
    vector<vector<char>> earth(n,vector<char> (n,'S'));

    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j+=2){
                if(k>0){
                    earth[i][j]='L';
                    k--;
                }
            }
        }
        else{
            for(int j=1;j<n;j+=2){
                if(k>0){
                    earth[i][j]='L';
                    k--;
                }
            }
        }
    }

    if(k>0){
        cout<<"NO";
        return 0;
    }


    cout<<"YES\n";
    for(auto x: earth){
        for(auto y:x){
            cout<<y;
        }
        cout<<endl;
    }


    return 0;
}

