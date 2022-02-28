#include<iostream>
using namespace std;


class Validation//making a class named validation
{
    int a,b,c;//taking three variables

public:
    void read(void);//read fucntion
    void calc(void);//calculation fucntion
};

void Validation::read(void)
{
    cout<<"Enter three numbers and ill compare if the last digit of the product of first two numbers is same as the alst digit of the third number "<<endl;
    cin>>a>>b>>c;//taking three numbers from user for evaluation
}

void Validation::calc(void)
{
    if(a*b%10==c%10)//any number divided by 10 leaves the last digit as the remainder,
        //so hereif the last number of the product of the first two numbers is the same as the last digit of the third number then good to go
        cout<<"Your validation is successful!"<<endl;
    else
        cout<<"The validation failed oops!"<<endl;
}






int main()
{

    Validation a;
    a.read();//firing read function
    a.calc();//firing calc function




    return 0;
}
