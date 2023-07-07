#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int T,N;
    cin>>T;
    while(T)
    {
      cin>>N;
      if((N%4)==0&&(N%100)!=0)
      {
        cout<<"Yes\n";
      }
      else if((N%400)==0&&(N%100)==0)
      {
        cout<<"Yes\n";
      }
      else
      {
        cout<<"No\n";
      }
      T--;
    }
    return 0;
  }