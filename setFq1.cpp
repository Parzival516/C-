//50000
//2000
//5%
//quarterly
#include<iostream>
using namespace std;
int main()
{
    const int balance{50000};
    const int fund{2000};

    cout<<"Total balance"<<balance+(fund*12)<<endl;
    cout<<"quarterly extra amount"<<(balance+(fund*3))*0.05<<endl;
    int extra=((balance+(fund*3))*0.05);
    cout<<"Extra ammount is "<<extra<<endl;




    return 0;
}
