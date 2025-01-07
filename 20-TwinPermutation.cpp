/*
5
5
1 2 4 5 3
2
1 2
1
1
3
3 2 1
4
1 4 3 2

*/#include<bits/stdc++.h>
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
        for(int i = 0;i<n;i++){
            cout<<n+1-arr[i]<<" ";
        }
        cout<<endl;
        
        t--;
    }
    
    return 0;
}
