#include <iostream>
using namespace std;

void welcome()
{
    cout<<"Welcome";
};

double add(double num1,double num2)
{
    double result=num1+num2;
    return result;
}



int main()
{
welcome();
double number1;
double number2;
cout<<"Enter the numbers: ";
cin>>number1>>number2;

double result=add(number1,number2);

cout<<"Your result is "<<result;



    return 0;
}