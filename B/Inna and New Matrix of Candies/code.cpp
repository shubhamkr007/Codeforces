#include <iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<unordered_set>
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
    int n,m,c,d;
    char a[1001][1001];
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    for(int i=0;i<n;i++)
    {
        bool G=0;
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='S'&&G==0)
            {
                cout<<-1<<endl;
                return 0;
            }
            else if(a[i][j]=='G')
                G=1;
        }
    }
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='S')
                c=j;
            else if(a[i][j]=='G')
                d=j;
        }
        s.insert(c-d);
    }
    cout<<s.size()<<endl;
    return 0;
}