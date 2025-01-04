#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int a, b, c;
        cin>>a>>b>>c;
        int d;
        if(c%2==0){
            d = c/2;
            a=a+d;
            b=b+d;
        }
        else{
            d=c/2+1;
            a=a+d;
            b=b+d-1;
        }
        if(b>=a){
            cout<<"Second\n";
        }
        else{
            cout<<"First\n";
        }
        t--;
    }
    return 0;
}
