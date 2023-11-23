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
    int t;
    cin>>t;
    while(t--){

        int n;
        priority_queue<int>pq;
        cin>>n;
        for(int i=n; i>=1; i--){
            pq.push(i);
        }
        int a,b,c;
        cout<<2<<endl;
        while(pq.size() > 1){
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            cout<<a<<" "<<b<<endl;
            c = a + b;
            if(c%2!=0)  c++;
            c /= 2;
            pq.push(c);
        }

    }
    return 0;
}

