#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t,i;
    cin>>t;
    int n[t];
    for(i=t;i>0;i--)
    {
      cin>>n[i];
    }
    for(i=t;i>0;i--)
    {
      cout<<n[i]+1;
      cout<<"\n";
    }
    
    return 0;
  }