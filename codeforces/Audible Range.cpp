#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >>n ;
    while(n!=0)
    {
        int a;
        cin>>a;
        if(a < 67 || a>45000)
        {
            cout<<"NO"<<endl;
        }
        else
        {
              cout<<"YES"<<endl;
        }
        n--;
    }

	return 0;
}

