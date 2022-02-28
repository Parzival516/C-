#include<iostream>
using namespace std;


class BankDeposit
{
    int principle;
    int years;
    float interestRate;
    float returnvalue;

public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit::BankDeposit(int p, int y,float r)
{
    principle=p;
    years=y;
    interestRate=r;
    returnvalue=principle;

    for(int i=0;i<y;i++)
    {
        returnvalue=returnvalue*(1+r);
    }

}

BankDeposit::BankDeposit(int p, int y,int r)
{
    principle=p;
    years=y;
    interestRate=float(r)/100;
    returnvalue=principle;

    for(int i=0;i<y;i++)
    {
        returnvalue=returnvalue*(1+r);
    }

}

void BankDeposit::show()
{
    cout<<endl<<"Principle amount was"<<principle<<endl;
    cout<<"return value after"<<years<<endl;
    cout<<" is "<<returnvalue<<endl;
}









int main()
{
 BankDeposit bd1,bd2,bd3;
 int p,y;
 float r;
 int R;
 cout<<"Enter the value of p,y,r"<<endl;
 cin>>p>>y>>r;
 bd1=BankDeposit(p,y,r);
 bd1.show();





    return 0;
}
