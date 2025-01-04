// 6
// 3
// 4 6 3
// 3
// 1 2 3
// 5
// 1 7 9 5 7
// 1
// 144
// 2
// 1 1
// 5
// 1 2 2 1 1 ===> 1 2 2 1 1 1 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<int> a(1), b(n);
        for(int i = 0; i<n; i++){
            cin>>b[i];
        }
        int j = 0;
        a[0]=b[0];
        for(int i = 1; i<n;i++){
            a.push_back(b[i]);
            if(b[i]>=a[j]){
                
            }
            else{
                i--;
            }
            j++;
        }
        cout<<a.size()<<endl;
        for(int i = 0; i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    terminateIteration: t--;
    }

    return 0;
}
