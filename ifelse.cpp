#include<iostream>
using namespace std;
int main()
{
    int num{};
    const int target{10};
    cout<<"Enter a number a and i'll compare it to "<<target<<endl;
    cin>>num;

    if(num>=target)
    {
        cout<<"============================"<<endl;
        cout<<num<<" is greater than or equal to "<<target<<endl;
        int diff{num-target};
        cout<<num<<" is "<<diff<<" greater than "<<target<<endl;

    }
    else
    {
        cout<<"====================="<<endl;
        cout<<num<<" is less than or equal to "<<target<<endl;
        int diff{target-num};
        cout<<num<<" is "<<diff<<" smaller than "<<target<<endl;

        return 0;
    }

















    return 0;
}
