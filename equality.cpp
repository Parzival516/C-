#include <iostream>
using namespace std;
int main()
{
    bool equal_result{false};
    bool not_equal_result{false};
    int num1{},num2{};

    cout<<boolalpha;

    cout<<"Enter two integers separated by space: ";
    cin>>num1>>num2;
    equal_result=(num1==num2);
    not_equal_result=(num1!=num2);
    cout<<"Comparison result(equal result) "<<equal_result<<endl;
    cout<<"Comparison result(not equal result) "<<not_equal_result<<endl;



    cout<<"Enter two characters separated by space"<<endl;
    char char1{},char2{};
    cin>>char1>>char2;

    equal_result=(char1==char2);
    not_equal_result=(char1!=char2);

    cout<<"Comparison result(equal)"<<equal_result<<endl;
    cout<<"Comparison result(not equal)"<<not_equal_result<<endl;







    return 0;
}
