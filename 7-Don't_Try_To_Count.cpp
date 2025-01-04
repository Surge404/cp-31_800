#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;cin>>s;
        int operations = 0;
        for(int i = 0; i<=5; i++){
            if(x.find(s)!=string::npos){
                cout<<operations<<endl; goto terminateIteration;
            }
            x.append(x);
            operations++;
        }
        cout<<-1<<endl;
    terminateIteration: t--;
    }

    return 0;
}
