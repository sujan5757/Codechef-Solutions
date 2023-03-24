#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> top;
        for(int i=0;i<n;i++){
            int r;
            cin>>r;
            auto it=upper_bound(top.begin(),top.end(),r);
            if(it==top.end()) top.push_back(r);
            else *it=r;
        }
        cout<<top.size()<<" ";
        for(int i=0;i<top.size();i++) cout<<top[i]<<" ";
        cout<<endl;
    }
    return 0;
}
