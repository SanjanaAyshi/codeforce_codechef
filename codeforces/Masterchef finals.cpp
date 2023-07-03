#include <iostream>
using namespace std;

int main() { int n; cin>>n;
    while(n!=0)
    {
        int x;
        cin>>x;
        if(x>=10)
        {
             cout<<"YES"<<endl;
        }
        else if(x<10)
        {
             cout<<"NO"<<endl;
        }
        n--;
    }

	return 0;
}
