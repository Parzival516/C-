#include<iostream>
using namespace std;
int main()
{
    int num{};
    const int lower{10};
    const int upper{20};
    cout<<boolalpha;

    cout<<"Enter an integer then we will compare it with "<<lower<<" and "<<upper<<" : ";
    cin>>num;

    bool within_bounds{false};
    within_bounds=(num>lower&&num<upper);
    cout<<num<<" is between "<<lower<<" and "<<upper<<" : "<<within_bounds<<endl;

    within_bounds=(num>lower||num<upper);
    cout<<num<<" is greater than "<<lower<<" or smaller than "<<upper<<":"<<within_bounds<<endl;
    within_bounds=(num<lower||num>upper);
    cout<<num<<" is smaller than "<<lower<<" or greater than "<<upper<<":"<<within_bounds<<endl;



    return 0;
}
