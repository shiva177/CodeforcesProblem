#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
    int n,h;
    cin>>n>>h;
    vector<int>weapons(n);
    for(int i=0;i<n;i++){
      cin>>weapons[i];
    }
    sort(weapons.rbegin(),weapons.rend());

    int maxi1=weapons[0];
    int maxi2=weapons[1];

    int sum=maxi1+maxi2;
    int full=h/sum;
    int rem=h%sum;

    long long ans=full*2;
    if(rem>0){
      if(rem<=maxi1){
        ans+=1;
      }
      else{
        ans+=2;
      }
    }
cout<<ans<<endl;

   }
return 0;
}
