#include <iostream>
using namespace std;
int main()
{
    /*
    +addition
    -subtraction
    *multiplication
    /division
    %modulo or remainder(works only with integers)

    */
    int num1(200);
    int num2{100};
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    int result{0};
    result=num1+num2;
    cout<<"Result is "<<result<<endl;

    cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;

    int result1{0};
    int num3{10};
    int num4{3};
    result1=num3%num4;
    cout<<"10%3=  "<<result1<<endl;
    cout<<5.0/10.0<<endl;
    return 0;
}
