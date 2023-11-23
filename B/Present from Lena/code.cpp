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

    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i;j++)
            cout<<"  ";
        
        if(i==0){
            cout<<"0"<<endl;
            continue;
        }
        for(int j=0;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=i-1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<"0"<<endl;
    }

    for(int i=n-1;i>=0;i--){

        for(int j=0;j<n-i;j++)
            cout<<"  ";
        
        if(i==0){
            cout<<"0"<<endl;
            continue;
        }
        
        for(int j=0;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=i-1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<"0"<<endl;
    }

    return 0;
}

