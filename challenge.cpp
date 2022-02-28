#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int>vector_one{0};
    vector <int>vector_two{0};

    cout<<"Enter 10 to add: "<<endl;
    int ten{0};
    cin>>ten;
    vector_one.push_back(ten);
    cout<<vector_one.at(0)<<endl;

    return 0;
}
