#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n+2);
        arr[0]=0;
        arr[n+1]=x;
        for(int i = 1; i<n+1; i++){
            cin>>arr[i];
        }
        arr[n+1]=2*(x-arr[n])+arr[n];
        int maxi =INT_MIN;
        for(int i = 1; i<=n+1; i++){
            maxi = max(maxi, arr[i]-arr[i-1]);
        }
        cout<<maxi<<endl;
        t--;
    }

    return 0;
}
