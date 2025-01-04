#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        vector<int> b,c;
        int flag=0;
        b.push_back(a[0]);
        for(int i = 1;i<n;i++){
            if(a[i]!=b[0]){
                flag=1;
            }
            if(flag==0){
                b.push_back(a[i]);
            }
            else{
                c.push_back(a[i]);
            }
        }
        int x = b.size();
        int y = c.size();
        if(y==0){
            cout<<-1<<endl;
        }
        else{
            cout<<x<<" "<<y<<endl;
            for(int i = 0; i<x;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i = 0; i<y;i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
        t--;}
    return 0;
}
