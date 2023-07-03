#include<bits/stdc++.h>
using namespace std;

int main() {

    int a,b,x,y,n;
    std::cin >>n ;
    while(n!=0)
    {
        cin>>a >> b>> x>> y;
        if(a>b)
        {
            int c=b-a;
            int m=x-y;
            if(m > c)
        {
            cout<<"yes"<<endl;
        }
        }
       else if(b>a)
        {
            int c=b-a;
            int m=x-y;
            if(m < c)
        {
            cout<<"no"<<endl;
        }
        }
        else if(a==b)
        {
            cout<<"yes"<<endl;
        }


        n--;
    }
}
