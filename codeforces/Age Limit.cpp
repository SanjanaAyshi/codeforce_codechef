#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    while(n!=0)
    {
        int min,max,age;
        cin>>min>>max>>age;
        if(age<=min && age < max)
        {
            cout<<"NO"<<endl;
        }
        else if(age>=min  && age < max)
        {
            cout<<"YES"<<endl;
        }
          else if(age==max && age==min )
        {
            cout<<"NO"<<endl;
        }
        n--;
    }
	return 0;
}
