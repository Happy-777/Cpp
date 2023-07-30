#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int n[10], T, i, op, m;
    cin>>T;
    for(i=1;i<=T;i++)
    {
      cin>>n[i];
    }
    for(i=1;i<=T;i++)
    {
      op=0;
      m=n[i]%10;
      if(m==0 || m==5)
      {
        while((n[i]%10)!=0)
        {
          n[i]*=2;
          op++;
        }
        cout<<op<<endl;;
      }
      else
        cout<<-1<<endl;
    }
    
    return 0;
  }