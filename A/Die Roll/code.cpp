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
    int a,b;
    cin>>a>>b;
    int maxi=max(a,b);

    int num=0;
    for(int i=maxi;i<=6;i++){
        num++;
    }

    int den=6;

    for(int i=6;i>0;i--){
        if(num%i == 0 && den%i ==0){
            num=num/i;
            den=den/i;
        }
    }

    cout<<num<<"/"<<den;

    return 0;
}

