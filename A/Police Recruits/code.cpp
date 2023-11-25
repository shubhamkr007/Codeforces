#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    
    
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>> arr[i];
        
        int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==-1 && st.empty()){
            count++;
        }
        else if(arr[i]>0){
            for(int j=0;j<arr[i];j++)   st.push(-1);
        }
        else if(arr[i]==-1 && !st.empty())
            st.pop();
        
    }
    
    cout<<count;
    
    return 0;
}