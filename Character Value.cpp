#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    char n;
    cin>>n;
    if(n=='p' or n=='P')
      cout<<"PrepBytes";
    else if(n=='z' or n=='Z')
      cout<<"Zenith";
    else if(n=='e' or n=='E')
      cout<<"Expert Coder";
    else if(n=='D' or n=='d')
      cout<<"Data Structure";
      
    return 0;
  }