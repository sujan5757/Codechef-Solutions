#include <bits/stdc++.h>
using namespace std;

int main() {
  int s;
  cin>>s;
  while(s--){
      int h,p,o;
      cin>>h>>p>>o;
      vector<pair<int,int>>z(h);
      for(int i=0;i<h;i++){
          cin>>z[i].first>>z[i].second;
      }
      sort(z.rbegin(),z.rend());
      int u=0;
      for(int i=0;i<h;i++){
          if(z[i].second==o && p>0){
              u+=z[i].first;
              p--;
          }
      }
      if(u==0||p!=0){
          cout<<-1<<endl;
      }
      else{
          cout<<u<<endl;
      }
  }
  return 0;
}
