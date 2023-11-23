#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t1,t2,k,a,b;
    double c1,c2;
    vector<pair<double,int> >v;
    cin>>n>>t1>>t2>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        c1=(a*t1)-(double(a*t1*k)/100)+(b*t2);
        c2=(b*t1)-(double(b*t1*k)/100)+(a*t2);
        v.push_back(make_pair(-1*max(c1,c2),i));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
        cout<<v[i].second<<" "<<fixed<<setprecision(2)<<-1*v[i].first<<endl;
    return 0;
}