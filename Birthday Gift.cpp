#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int T, i;
    cin>>T;
    int start[T], ans[T], diff[T], answer;
    for(i=0;i<T;i++)
    {
      cin>>start[i]>>ans[i]>>diff[i];
    }
    for(i=0;i<T;i++)
    {
      if(ans[i]==start[i])
        cout<<"YES"<<endl;
      else if(diff[i]==0)
        cout<<"NO"<<endl;
      else if((diff[i]>0 and ans[i]>=start[i]) or (diff[i]<0 and ans[i]<=start[i]))
      {
        answer=(diff[i]*(ans[i]/diff[i]))+(start[i]%diff[i]);
        if(answer==ans[i])
          cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;
      }
      else
        cout<<"NO"<<endl;
    }
    return 0;
  }