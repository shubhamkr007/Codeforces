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
    string s;
	cin >> s;
	int sum = 0;
	int last_bear = -1;
	if (s.size() < 4)sum = 0;
	else {
		for (int i = 0; i < s.size() - 3; i++) {
			if (s[i] == 'b' && s[i + 1] == 'e' && s[i + 2] == 'a' && s[i + 3] == 'r') {
				sum += (i - last_bear) * (s.size() - (i + 3));
				last_bear = i;
			}
		}
	}
	cout << sum;
}

