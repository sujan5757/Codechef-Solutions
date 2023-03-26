#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t;cin>>t;
	int p[]={2048,1024,512,256,128,64,32,16,8,4,2,1};
	while(t--){
	    int n,r=0;cin>>n;
	    for(int i=0;i<12;i++){
	        while(n>=p[i]){
	            r++;
	            n-=p[i];
        	}
	    }
	    cout<<r<<endl;
	}
	return 0;
}
