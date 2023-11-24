#include<bits/stdc++.h>
#define INF  -1
#define MOD  1000000007
#define BIG  1000000007
#define ll  long long
#define ii pair<int,int>
#define iii pair<int,pair<int,int> >
#define MP(a,b) make_pair(a,b)
#define fr first
#define sc second
using namespace std;


int main()
{
    int a;
    double x,y;
    cin>>a>>x>>y;

    if(a <= abs(x)){
        cout<<-1;
        return 0;
    }

    if(abs(y) <= a){
        if(abs(x) < (double)a/2 && y!=0 && y!=a){
            cout<<1;
            return 0;
        }
        else{
            cout<<-1;
            return 0;
        }
    }

    int ind=ceil(y/a);
    if((int)y/a== ind){
        cout<<-1;
        return 0;
    }

    if(ind%2==0){
        if(ind==2){
            if(abs(x) < (double)a/2)
                cout<< 2;
            else
                cout<<-1;
            return 0;
        }
        else{
            int temp=(ind/2)-1;
            if(abs(x) < (double)a/2){
                cout<< ind + temp; 
            }
            else{
                cout<<-1;
            }
            return 0;
        }
    }
    else{
        int temp=(ind/2)-1;
        if(x>0){
            cout<<ind+temp+1;
        }
        else if(x<0){
            cout<<ind+temp;
        }
        else
            cout<<-1;
    }



    return 0;
}

