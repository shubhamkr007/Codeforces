#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;


int main(){
	
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);  
        #endif

	int n;
    cin>>n;
    vector<ll> exp(n);

    for(int i=0;i<n;i++){
        cin>>exp[i];
    }
    int ans=INT_MAX,x;

    sort(exp.begin(),exp.end());
    for(int i=0;i<n;i++)
    {
        x=upper_bound(exp.begin(),exp.end(),exp[i]*2)-exp.begin();
        ans=min(ans,i+n-x);
    }
    cout<<ans<<endl;

	return 0;
}