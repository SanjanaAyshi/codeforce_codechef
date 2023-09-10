#include<bits/stdc++.h>
using namespace std;
int dinamic_pro[1005][1005];

int knapsack(int item_list,int bag_size, int value_a[],int weight_a[])
{
    ///base case
    if(item_list==0 || bag_size==0)
    {
        return 0;
    }

    if(dinamic_pro[item_list][bag_size] !=-1)// jodi amar array te -1 na thake er mane vhalue ber kore felse just retun kore dew ar ber korta lagbe na
    {
        return dinamic_pro[item_list][bag_size];
    }

    ///main case
    if(weight_a[item_list-1]<=bag_size)///option 1&2 tolho e niote parbo jokho amr ager iteam er size amar bag er size take maintain korbe
    {
        int option1=knapsack(item_list-1,bag_size-weight_a[item_list-1],value_a,weight_a)+value_a[item_list-1];///jodi nei
        int option2=knapsack(item_list-1,bag_size,value_a,weight_a);/// jodi na nei

        return dinamic_pro[item_list][bag_size]=max(option1,option2);
    }
    else
    {
        return dinamic_pro[item_list][bag_size]=knapsack(item_list-1,bag_size,value_a,weight_a);
    }

}

int main()
{
    int item_list,bag_size;
    cin>> item_list>>bag_size;
    int value_a[item_list],weight_a[item_list];
    for(int i=0; i<item_list; i++)
    {
        cin>>weight_a[i]>>value_a[i];
    }
    for(int i=0; i<=item_list; i++) ///bag e kno kisu na thakle -1
    {
        for(int j=0; j<=bag_size; j++)
        {
            dinamic_pro[i][j]=-1;
        }
    }
    cout<<knapsack(item_list,bag_size,value_a,weight_a);
    return 0;
}
