#include<iostream>
using namespace std;
int main()
{
    int num{10};
    cout<<num<<endl;
    cout<<sizeof num<<endl;
    cout<<&num<<endl<<endl;

    int *p;
    cout<<p<<endl;
    cout<<sizeof p<<endl;
    cout<<&num<<endl;



    return 0;
}
