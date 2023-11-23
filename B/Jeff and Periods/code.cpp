#include <iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<set>
#include<math.h>
#include<map>
#include<stack>
#include<sstream>
#include<queue>
#include<list>
#include<iomanip>
#include<bitset>
#include<numeric>
#include<limits.h>
#define INF  -1
#define MOD  1000000007
#define BIG  1000000007
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
    vector<int> temp(n);
    for (int i=0;i<n;i++)
    {
        cin>>temp[i];
    }

    map<int, priority_queue<int> > mp;

    for(int i=0;i<n;i++){
        mp[temp[i]].push(i);
    }
    vector<ii> ans;

    for(auto x: mp){
        if(x.second.size() > 1){
            int curr=x.second.top();
            x.second.pop();
            int diff= curr - x.second.top();

            while(!x.second.empty()){
                if(curr-x.second.top()  != diff ){
                    break;
                }
                curr=x.second.top();
                x.second.pop();
            }

            if(x.second.empty()){
                ans.push_back({x.first,diff});
            }
        }
        else{
            ans.push_back({x.first,0});
        }
    }

    cout<<ans.size()<<endl;
    for(auto x: ans){
        cout<<x.fr<<" "<<x.sc<<endl;
    }


    return 0;
}

