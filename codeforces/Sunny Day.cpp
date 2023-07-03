#include <iostream>
using namespace std;

int main() {
int n; cin>>n;
    while(n!=0)
    {
        int x;
        cin>>x;
        if(x<24)
        {
             cout<<"no"<<endl;
        }
        else if(x>=25)
        {
             cout<<"yes"<<endl;
        }
        n--;
    }
	return 0;
}

