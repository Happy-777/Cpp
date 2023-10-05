#include <bits/stdc++.h>
  using namespace std;
  
  //MOHAMMED IBRAHIM NASIR
  
  int main()
  {
    int T;
    cin>>T;
    while(T--)
    {
      long long int n,x=1, op=0, copy=1;
      cin>>n;
      while(x!=n)
      {
        op++;
        if(n%(x)==0)
        {
          copy=x;
          op++;
          x+=copy;
        }
        else
        {
          x+=copy;
        }
      }
      cout<<op<<endl;
    }
    return 0;
  }