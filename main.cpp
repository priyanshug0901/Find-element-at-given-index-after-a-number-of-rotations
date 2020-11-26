#include <bits/stdc++.h>

using namespace std;
int main() {
  int n=5;
  int a[]={1,2,3,4,5};
 int x,y;
 int t;
 cin>>t;
 while(t--){
  cin>>x>>y;
  reverse(a+x,a+y+1);
  reverse(a+x+1,a+y+1);
}
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl<<a[1];
}