#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN = 2e5 + 5;
 
int main(void)
{
	int t[MAXN];
	int ti, n, m, h;
	cin >> ti;
	
	while (ti--)
	{
		cin >> n >> m >> h;
		long long ans = 1, so1, p1;
		for (int i = 1; i <= n; i++)
		{
			long long so = 0, p = 0;
			for (int j = 0; j < m; j++)
				cin >> t[j];
			sort(t, t + m);
			
			int tj = 0;
			for (int j = 0; j < m and tj + t[j] <= h; j++)
				tj += t[j], so++, p += tj;	
			
			if (i == 1)
				so1 = so, p1 = p;
			else
			{
				if (so > so1)
					ans++;
				else if (so == so1 and p < p1)
					ans++;
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}
