#include<bits/stdc++.h>
#include<cctype>
#define arrayInput long long int n; cin >> n; long long int a[n]; for(int i=0; i<n; i++) cin >> a[i];
#define test int t; cin >> t; while(t--)
#define iloop(a, n) for(int i=a; i<n; i++)
#define jloop(a, n) for(int j=a; j<n; j++)
#define dloop(a, n) for(int i=a; i>n; i--)
#define print(a) cout << a << "\n";
#define dprint(a, b) cout << a << " " << b << endl;
#define nd &&
#define rr ||
#define ek ==
#define nek !=
#define ll long long
#define lli long long int
#define asort(a, n) sort(a, a+n);
#define dsort(a, n) sort(a,a+n,greater<int>())
#define yesPrint cout << "YES" << endl;
#define noPrint cout << "NO" << endl;
#define dPrint(a, b) cout << a << " " << b << "\n";
#define aeprint(a) cout << a << " ";
#define line cout << "\n";
#define maxArray(a,n) *max_element(a, a+n)
#define minArray(a,n) *min_element(a, a+n)
#define fast  ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;


int gcd(int a, int b)
{
    while (true)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

int lcm(int a, int b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}

void solve(){
    lli n;
    cin >> n;
    lli a[n+4];
    iloop(1, n+1) cin >> a[i];


    if(n==1) print(a[1]-1)
    else{
        vector<lli>v;
        v.push_back(1);

        iloop(1, n+1){
            if(a[i] != v[v.size()-1]) v.push_back(a[i]);
        }

        lli ans = 0;

        iloop(0, v.size()-1){
            if(v[i]<v[i+1]){
                // print(ans)
                ans+= (v[i+1]-v[i]);
            }
        }
        print(ans);
    }


}

int main(){
    fast; 
    test{
        solve();
    }
}