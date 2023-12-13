#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    
    unordered_set<char> st;
    for(auto x: s){
        if(x=='{' || x=='}' || x==' ' || x==',')
            continue;
        st.insert(x);
    }
    
    cout<<st.size();
    
    return 0;
}