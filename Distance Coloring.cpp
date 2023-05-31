#include <bits/stdc++.h>
using namespace std;
#define qq long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);
#define fuk 1000000007
void solve(){
    qq h,o; cin>>h>>o;
    long long youf=1;
    for(qq i=0;i<h;i++){
        youf=(youf*o)%fuk;
        if(o>1) o--;
    }
    cout<<youf<<endl;

}
    
int main(){
    fastio
    int l;
    cin>>l;
    while(l--){
        solve();
    }

    return 0;
}
