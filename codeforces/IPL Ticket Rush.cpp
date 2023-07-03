#include<bits/stdc++.h>
using namespace std;

int main() {
	 int n;
    std::cin >>n ;
    while(n!=0)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            int remian=a-b;
            cout<<remian<<endl;
            break;
        }
        if(b>a)
        {
            int remian=a-b;
            cout<<remian<<endl;
            break;
        }
       n--;
    }
	return 0;
}
