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
    cin>>n;
    string s;
    cin>>s;

    int youL=0, youO=0;
    int friendsL=0, friendO=0;

    for(auto x: s){
        if(x=='L')
            friendsL++;
        else
            friendO++;
    }

    for(int i=0;i<s.length();i++){
        if(s[i] == 'L'){
            youL++;
            friendsL--;
        }
        else{
            youO++;
            friendO--;
        }

        if(youL != friendsL && youO != friendO){
            cout<<i+1;
            return 0;
        }
    }

    cout<<-1;
    return 0;
}

