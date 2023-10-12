#include <iostream>

using namespace std;

int main()
{
    int num, count=0;
    cin>>num;
    while(num!=0)
    {
        if(num%2==0)
        {
            num=num/2;
            count++;
        }
        else
        {
            num=num-1;
            count++;
        }
    }
    cout<<count;
    return 0;
}