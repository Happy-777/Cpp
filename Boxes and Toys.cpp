#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int N,i,c=0;
    cin>>N;
    int ti[N],ci[N];
    for(i=0;i<N;i++)
    {
      cin>>ti[i];
      cin>>ci[i];
    }
    for(i=0;i<N;i++)
    {
      if((ci[i]-ti[i])>=2)
      {
        c++;
      }
    }
    cout<<c;
    return 0;
  }