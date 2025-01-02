#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]!=1){
                cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        cout<<"\n";
        t--;
    }

    return 0;
}
