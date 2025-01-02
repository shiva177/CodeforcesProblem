#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>arr(k);
    for(int i=0;i<k;i++){
      cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    int cat_p=0;
    int ans=0;

    for(int i=0;i<k;i++){
      if(cat_p<arr[i]){
        cat_p+=(n-arr[i]);
        ans++;
      }
      else{
        break;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}