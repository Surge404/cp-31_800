#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int n=0;
        if(b>d){
            cout<<-1<<endl;goto terminateIteration;
        }
        n+=d-b;
        a+=n;
        if(a<c){
            cout<<-1<<endl;goto terminateIteration;
        }
        n+=a-c;
        cout<<n<<endl;
        terminateIteration: t--;
    }
    return 0;
}
