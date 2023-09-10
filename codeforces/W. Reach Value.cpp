#include<bits/stdc++.h>
using namespace std;
long long int in;
bool reachValue(long long int number)
{
    if(number==in)
    {
        return true;
    }
    else if(in<number)
    {
        return false;
    }
    bool option1=reachValue(number * 10);
    bool option2=reachValue(number * 20);
    return option1 || option2;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>in;
        if(reachValue(1))
        {
            cout<<"YES"<< endl;
        }
        else
        {
            cout<<"NO"<< endl;
        }

    }

    return 0;
}
