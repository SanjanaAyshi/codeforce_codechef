#include<bits/stdc++.h>
using namespace std;

    int main()
{
int t;
cin>>t;
while(t--)
{
    int element,odd=0,even=0;
    cin>>element;
    element=2*element;
    for(int i=0;i<element;i++)
    {
        int x;
        cin>>x;
        if(x%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(odd==even)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
return 0;
}
