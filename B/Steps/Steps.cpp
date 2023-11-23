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
    long long int n,m;

    cin>>n>>m;
    long long int x,y;
    cin>>x>>y;

    long long int k;
    cin>>k;

    long long int ans=0;

    while(k--){
        long long int a,b;
        cin>>a>>b;
        
        int moveX, moveY;

        if(a>0){
            moveX=(n-x)/a;
        }
        else if(a==0){
            moveX=INT_MAX;
        }
        else{
            moveX=(1-x)/a;
        }

        if(b>0){
            moveY=(m-y)/b;
        }
        else if(b==0){
            moveY=INT_MAX;
        }
        else{
            moveY=(1-y)/b;
        }

        int temp=min(moveX,moveY);

        ans+=temp;
        
        x+=a*temp;
        y+=b*temp;

    }

    cout<<ans;
    return 0;
}

