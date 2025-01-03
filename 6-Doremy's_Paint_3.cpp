#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        map<int,int> mp;
        for (int i = 0; i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int k = mp.size();
        if(k==0||k==1){
            cout<<"YES\n";
        }
        else if(k>=3){
            cout<<"NO\n";
        }
        else if(k==2){
            map<int, int>:: iterator itr;
            int i = 0;
            vector<int> a(2);
            for(auto itr = mp.begin(); itr!=mp.end(); itr++){
                a[i]=itr->second;
                i++;
            }
            if(a[0]-a[1]==1||(a[0]-a[1]==0)||a[0]-a[1]==-1){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    t--;
    }

    return 0;
}
