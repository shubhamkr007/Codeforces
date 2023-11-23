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


bool isValid(string str){
    set<char> st;
    int temp=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='?') temp++;
        else
            st.insert(str[i]);
    }

    if(st.size() + temp == str.length())    return true;

    return false;
}
int main()
{
    string s;
    cin>>s;
    if(s.length()<26){
        cout<<-1;
        return 0;
    }

    bool flag=false;

    for(int i=0;i<s.length()-25;i++){
        string str=s.substr(i,26);
        if(isValid(str)){
            flag = true;
            vector<int> miss;
            vector<bool> hash(26);
            for(int i=0;i<str.length();i++){
                if(str[i]=='?')
                    miss.push_back(i);
                else
                    hash[str[i]-'A']=true;
            }
            stack<char> st;
            for(int i=0;i<hash.size();i++){
                if(!hash[i]){
                    st.push('A'+i);
                }
            }

            for(int j=0;j<miss.size();j++){
                s[i+miss[j]]=st.top();
                st.pop();
            }
        }
    }

    if(!flag){
        cout<<-1;
        return 0;
    }    

    for(int i=0;i<s.length();i++){
        if(s[i]=='?')
            s[i]='A';
    }

    cout<<s;


    
    return 0;
}

