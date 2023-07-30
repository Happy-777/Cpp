#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int T, i;
    cin>>T;
    int l[T], b[T], x;
    for(i=0;i<T;i++)
    {
      cin>>l[i]>>b[i];
    }
    for(i=0;i<T;i++)
    {
      x=(l[i]*b[i])/2;
      cout<<x<<endl;
    }
    
    return 0;
  }