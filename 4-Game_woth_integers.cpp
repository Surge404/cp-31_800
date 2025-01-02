#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int dots = 0, cd=0;
        for(int i = 0; i<n;i++){
            if(cd>=3){
                cout<<2;goto lc;
            }
            if(s[i]=='#'){
                cd=0;
            }
            else{
                cd++;
                dots++;
            }
        }
        if(cd>=3){
                cout<<2;goto lc;
            }
        cout<<dots;
        lc: cout<<endl;
        t--;
    }

    return 0;
}
