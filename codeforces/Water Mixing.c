#include<bits/stdc++.h>
using namespace std;

int main() {

    int a,b,x,y,n;
    std::cin >>n ;
    while(n!=0)
    {
        cin>>a >> b>> x>> y;
        int m=x-y;
        int c=b-a;
        if(m >= c)
        {
            cout<<"yes";
        }
        else(m > = c)
        {
            cout<<"no";
        }
    }
	return 0;
}
