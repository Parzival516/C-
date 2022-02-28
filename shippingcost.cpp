#include<iostream>
using namespace std;
int main()
{

    cout<<"Please enter the dimensions separated by space: "<<endl;
    int length{},width{},height{};
    cin>>length>>width>>height;
    float total{length*width*height};

    if(length<=10||width<=10||height<=10)
    {
        if(total>100)
            total=(total*2.50)+(0.10*(total*2.50));
        else if(total>500)
            total=(total*2.50)+(0.25*(total*2.50));

        cout<<"your total charges are: "<<total<<endl;
    }
    else
    {
        cout<<"Sorry dimensions not allowed"<<endl;
    }


































    return 0;
}
