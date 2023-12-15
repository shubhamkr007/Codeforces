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
    stack<char> st;
    int cnt=0;
    
    for(int i=0;i<s.length();i++){
          if(s[i]=='(')
            st.push(s[i]);
          else
          {
              if(!st.empty() )
                st.pop(),cnt++;
          }
      }

    cout<<cnt*2;
    return 0;
}

