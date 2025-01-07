
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int sp = 0, ms=0;
        for(int i = 0;i<n;i++){
            if(arr[i]==0){
                sp++;
            }
            else{
                sp=0;
            }
            ms = max(sp, ms);
        }
        cout<<ms<<endl;
        
        t--;
    }
    
    return 0;
}
