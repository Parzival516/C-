#include<iostream>
using namespace std;
int main()
{

    //4 wheels
    //1 car body
    //2 figures


    cout<<"Enter number of wheels: "<<endl;
    int wheels{0};
    cin>>wheels;
    cout<<"Enter number of car body: "<<endl;
    int carbody{0};
    cin>>carbody;
    cout<<"Enter number of figures: "<<endl;
    int figure{0};
    cin>>figure;

    if(wheels%4==0.0)
        cout<<"Number of wheels is: "<<wheels<<endl;
    else
        cout<<"Wheels validation failed"<<endl;

    if(figure%2==0.0)
        cout<<"Number of figures is: "<<figure<<endl;
    else
        cout<<"Figure validation failed"<<endl;

    if(wheels%carbody==0.0)
    cout<<"Number of carbody is: "<<carbody<<endl;
    else
       cout <<"Carbody validation failed"<<endl;

        if(figure%2==0.0&&wheels%4==0.0&&wheels%carbody==0.0)
        cout<<"Number of cars you can make is: "<<wheels/4.0<<endl;
    else
        cout<<"Invalid format"<<endl;

    return 0;
}
