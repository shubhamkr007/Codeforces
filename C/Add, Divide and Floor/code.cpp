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


void solve(){
    int array_size;
    cin >> array_size;
    vector<int> elements(array_size);
    int max_element = 0;

    for (int i = 0; i < array_size; i++) {
        cin >> elements[i];
        max_element = max(max_element, elements[i]);
    }

    vector<int> result;
    while (max_element) {
        int flag = 1;
        for (int i = 1; i < array_size; i++) {
            if (elements[i] != elements[i - 1]) {
                flag = 0;
            }
        }
        if (flag) {
            break;
        }
        int index = (max_element % 2 == 0);
        for (int i = 0; i < array_size; i++) {
            elements[i] = (elements[i] + index) / 2;
        }
        max_element = (max_element + index) / 2;
        result.push_back(index);
    }

    cout << (int)result.size() << "\n";
    if (result.size() <= array_size) {
        for (auto it : result) {
            cout << it << " ";
        }
    }
    if(result.size() != 0) 
        cout << "\n";
}


int main(){
    fast; 
    test{
        solve();
    }
}