#include <iostream>
using namespace std;

int main() {
	int n; cin>>n;
    while(n!=0)
    {
        int x,y;
        cin>>x>>y;
        if(x*y<=500)
        {
             cout<<"yes"<<endl;
        }
        else if(x*y>=500)
        {
             cout<<"no"<<endl;
        }
        n--;
    }
	return 0;
}
