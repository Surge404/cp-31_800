#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        long long n, k;
        cin>>n>>k;
        if(n%2==0){
            cout<<"Yes\n";
        }
        else {
            if(k%2==0){
                cout<<"No\n";
            }
            else {
                cout<<"Yes\n";
            }
        }
        terminateIteration: t--;
    }
    return 0;
}
