#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i<N;i++){
            cin>>arr[i];
        }
        int p = 0, n = 0, sum=0;
        for(auto x: arr){
            if(x==1){
                p++;
            }
            else{
                n++;
            }
            sum+=x;
        }
        int op = 0;
        while(sum<0){
            p++;n--;op++;
            sum=sum+2;
        }
        if(n%2==0){
            cout<<op<<endl;
        }
        else{
                cout<<op+1<<endl;
        }
        terminateIteration: t--;}
    return 0;
}
