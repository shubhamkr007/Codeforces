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
    int xa,xb,ya,yb;
    cin>>xa>>ya>>xb>>yb;

    vector<iii> heat;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,t;
        scanf("%d %d %d",&a,&b,&t);
        heat.push_back({t,{a,b}});
    }

    int count=0;
    int mini=min(xa,xb);
    int maxi=max(xa,xb);
    
    for(int i=mini;i<=maxi;i++){
        bool flag=false;
        for(int j=0;j<heat.size();j++){
            int dis= sqrt(pow(heat[i].second.first - i ,2) + pow(heat[i].second.second - ya,2)  );
            if(dis <= heat[i].first){
                flag=true;
                break;
            }
        }

        for(int j=0;j<heat.size();j++){
            int dis= sqrt(pow(heat[i].second.first - i ,2) + pow(heat[i].second.second - yb,2)  );
            if(dis <= heat[i].first){
                flag=true;
                break;
            }
        }

        if(flag){
            count++;
        }
    }

    mini=min(ya,yb);
    maxi=max(ya,yb);

    for(int i=mini;i<=maxi;i++){
        bool flag=false;

        for(int j=0;j<heat.size();j++){
            int dis= sqrt(pow(heat[j].second.first - xa ,2) + pow(heat[j].second.second - i,2)  );
            if(dis <= heat[j].first){
                flag=true;
                break;
            }
        }

        for(int j=0;j<heat.size();j++){
            int dis= sqrt(pow(heat[j].second.first - xb ,2) + pow(heat[j].second.second - i,2)  );
            if(dis <= heat[j].first){
                flag=true;
                break;
            }
        }

        if(flag){
            count++;
        }
    }

    int a=2*abs(xa-xb);
    int b=2*abs(ya-yb);

    cout<<a+b-count; 

    return 0;
}
