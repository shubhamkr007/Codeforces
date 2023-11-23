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
    int p,d,t,c,f;
    cin>>p>>d>>t>>f>>c;
    double princess = p * t,T;
    int bijous = 0;
    if (p < d)
    {
        while (princess < c)
        {
            T = princess / (d - p);
            princess += T * p;
            if (princess < c)
            {
                princess += (T + f) * p;
                bijous++;
            }
        }
    }
    cout<<bijous<<endl;

    return 0;
}

