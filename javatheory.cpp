#include <iostream>
using namespace std;
int main()
{
    cout<<"Please write the ammount of bags you want to purchase: "<<endl;
    int bag{0};
    cin>>bag;
    cout<<"Please enter the hour of purchase: "<<endl;
    int time{0};
    cin>>time;
    float actualprice{60.25};

    if (time<=6)
    {
        cout<<"Your total price will be: "<<bag*90.00<<endl;
    }
    else
    {
        cout<<"Your total price will be: "<<bag*70.00<<endl;
    }
    
    if (time<=6)
    {
        cout<<"Total profit on the sale is: "<<(bag*90.00)-(actualprice*bag)<<endl;
    }
    if (time>6)
    {
        cout<<"Total profit on the sale is: "<<(bag*70.00)-(actualprice*bag)<<endl;
    }
    
    





    return 0;
}