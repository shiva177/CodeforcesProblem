#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,s;
    cin>>n>>s;
    int mid_position=ceil(n*1.0/2);
    int contribution=n-(mid_position-1);
    cout<<(s/contribution)<<endl;
  } 
} 