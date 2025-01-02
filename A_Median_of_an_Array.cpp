#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    int mid=(n+1)/2;
    int cnt=0;
    for(int i=mid-1;i<n;i++){
      if(arr[i]==arr[mid-1]){
        cnt++;
      }
    }
    cout<<cnt<<endl;
  }
}