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
    cin>> n;
    vector<int> snakes(n);
    for(int i=0;i<n;i++){
        cin >> snakes[i];
    }

    vector<bool> hash(n+1);
    int temp = n;
    for(int i=0;i<n;i++){
        hash[snakes[i]]=true;
        if(temp==snakes[i]){
            while(hash[temp]){
                cout<<temp<<" ";
                temp--;
            }
        }
        cout<<endl;
    }
    return 0;
}

