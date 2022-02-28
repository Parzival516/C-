#include <iostream>
using namespace std;
int main()
{
    int num{};
    const int min{10};
    const int max{100};

    cout<<"Enter a number between "<<min<<" and "<<max<<endl;
    cin>>num;

    if(num>=min){
        cout<<"=========if statement 1======="<<endl;
        cout<<num<<" is greater than "<<min<<endl;
        int diff{num-min};
        cout<<num<<" is "<<diff<<" greater than or equal to "<<min<<endl;
    }

    if(num<=max)
    {
        cout<<"===============if statement 2========"<<endl;
        cout<<num<<" is less than or equal to "<<max<<endl;
        int diff{max-num};
        cout<<"The number you entered is "<<diff<<" less than "<<max<,endl;
    }












return 0;
}
