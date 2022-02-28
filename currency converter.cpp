#include <iostream>
using namespace std;
int main()
{
    const double rup_per_usd{73.70};

    cout<<"Welcome to currency exchange!"<<endl;
    cout<<"Enter the value in USD: "<<endl;

    double rup{0.0};
    double dollars{0.0};
    cin>>dollars;
    rup=dollars*rup_per_usd;

    cout<<dollars<<"dollars is equivalent to "<<rup<<" rupees"<<endl;
    return 0;
}
