#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int sum = 0;
        for(int i =0; i<n;i++){
            sum+=arr[i];
        }
        if(sum%2==0){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
        terminateIteration: t--;}
    return 0;
}
