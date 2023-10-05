#include <bits/stdc++.h>
  using namespace std;
  
  //MOHAMMED IBRAHIM NASIR
  
  int main()
  {
    int T;
    cin>>T;
    while(T--)
    {
      long long int i, n, m, c=0,ans=0;
      cin>>n;
      m=n;
      while(m!=0)
      {
        m=m/10;
        c++;
      }
      m=n;
      for(long long int j=1;j<c;j++)
      {
        ans+=9*j*(long long int)pow(10,j-1);
        
      }
      ans+=c+(c*(abs((long long int)pow(10,c-1)-n)));
      cout<<ans<<endl;
    }
    
    return 0;
  }