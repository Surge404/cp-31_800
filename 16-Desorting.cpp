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
        int diff = INT_MAX;
        for(int i = 1;i<n;i++){
            diff=min(diff,abs(arr[i]-arr[i-1]));
            if(arr[i]<arr[i-1]){
                cout<<0<<endl;goto terminateIteration;
            }
        }
        cout<<diff/2+1<<endl;
        terminateIteration: t--;}
    return 0;
}
