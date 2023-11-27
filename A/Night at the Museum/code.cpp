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
    char start='a';

    int sum=0;
    
    for(int i=0;i<s.size();i++){
    int temp1=abs(s[i]- start);
    int temp2=26-temp1;
    sum+=min(temp1,temp2);
    start=s[i];
    }
    cout<<sum<<endl;
    return 0;
}

