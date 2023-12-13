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
    string s;
    cin>>s;

    string target = "hello";
    int n = s.length();

    int k = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == target[k]){
            k++;
        }
    }
    if(k == target.length()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

