#include <iostream>
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
            cout<<remain<<endl;
            break;
        }
        if(b>a)
        {
            int remian=a-b;
            cout<<remain<<endl;
            break;
        }
       n--;
    }
	return 0;
}
