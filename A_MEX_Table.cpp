#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    if(n==1 && m==1) cout<<2<<endl;
    else
    cout<<max(n,m)+1<<endl;
  }
}