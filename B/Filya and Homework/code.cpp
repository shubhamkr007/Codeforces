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
    vector<int> arr(n);
    set<int> st;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        st.insert(arr[i]);
    }

    if(st.size()>3){
        cout<<"NO";
        return 0;
    }

    if(st.size()==2 || st.size() ==1){
        cout<<"YES";
        return 0;
    }

    vector<int> temp;
    if(st.size()==3){
        for(auto x: st){
            temp.push_back(x);
        }
    }

    if(temp[1]-temp[0] == temp[2]-temp[1]){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}

