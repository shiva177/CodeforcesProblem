#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
   int aa=max(0,max(b,c)+1-a);
   int bb=max(0,max(a,c)+1-b);
   int cc=max(0,max(a,b)+1-c);

   cout<<(aa)<<" "<<(bb)<<" "<<(cc)<<endl;

    
  }
}