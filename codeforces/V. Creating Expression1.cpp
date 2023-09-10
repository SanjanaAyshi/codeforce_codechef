#include<bits/stdc++.h>
using namespace std;
int element,target;
int store[21];

bool check_sum(long long int sum,int indEx)
{
    if (indEx==element)
    {
        return sum == target;
    }

    bool option1=check_sum(sum+store[indEx],indEx+1);
    bool option2=check_sum(sum-store[indEx],indEx+1);

    return option1||option2;
}

int main()
{
    cin>>element>>target;
    for(int i=0;i<element;i++)
    {
        cin>>store[i];
    }
    if(check_sum(store[0],1))
    {
        cout<<"YES"<< endl;
    }
    else
    {
          cout<<"NO"<< endl;
    }

    return 0;
}
