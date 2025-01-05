#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k,x;
        cin>>n>>k>>x;
        if(x!=1){
            if(k<=1){
                cout<<"NO\n";goto terminateIteration;
            }
            cout<<"YES\n"<<n<<endl;
            for(int i = 0; i<n;i++){
                cout<<1<<" ";
            }cout<<"\n";
        }
        else{
            if(n%2==0&&k>=2){
                cout<<"YES\n"<<n/2<<endl;
                for(int i = 1; i<=n/2;i++){
                    cout<<2<<" ";
                }cout<<endl;
            }
            else if(n%2==0&&k<2){
                    cout<<"NO\n";
                }
            else{
                if(k>=3){
                    cout<<"YES\n"<<n/2<<endl<<3<<" ";
                    for(int i = 1;i<=n/2-1;i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
                else{
                    cout<<"NO\n";
                }
            }
            
        }
        terminateIteration: t--;}
    return 0;
}
