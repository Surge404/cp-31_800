#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n;
        int sum = 0;
        vector<int> arr(n-1);
        for(int i = 0; i<n-1;i++){
            cin>>arr[i];
        }
        for(int i  =0; i<n-1; i++){
            sum+=arr[i];
        }
        cout<<-1*sum<<endl;
    terminateIteration: t--;
    }

    return 0;
}
