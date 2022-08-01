#include<bits/stdc++.h>
using namespace std;

int addNumber(int firstParam, int secondParam)
{
    int result=firstParam+secondParam;
    return result;

}


int main()
{
    int firstnumber{3};
    int secondnumber{7};
    cout<<firstnumber<<" "<<secondnumber<<endl;
    int sum=firstnumber+secondnumber;
    cout<<sum<<endl;
    sum=addNumber(25,7);
    cout<<sum<<endl;

    sum=addNumber(30,54);
    cout<<sum;
    return 0;
}