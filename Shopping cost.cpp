#include <bits/stdc++.h>
#include<iostream>
#include<iomanip>
  using namespace std;
  
  int main()
  {
    int N, i;
    cin>>N;
    
    double q[N],p[N], m;
    for(i=0;i<N;i++)
      cin>>q[i]>>p[i];
    for(i=0;i<N;i++)
    {
      if(q[i]>100)
      {
        p[i]=p[i]-(p[i]*0.2);
      }
      cout<<fixed<<setprecision(1)<<q[i]*p[i]<<endl;
    }
    
    return 0;
  }