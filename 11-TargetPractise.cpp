#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int k = INT_MAX;
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n;i++){
        k = min(k, abs(arr[i]));
    }
    cout<<k;
    return 0;
}
