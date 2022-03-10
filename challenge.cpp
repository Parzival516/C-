#include <iostream>
using namespace std;
int main()
{
    /*Problem:carpet cleaning service
    charges:
    $25 per small room
    $35 per large room
    sales tax rate is 6%
    Estiamted are valid for 30 days*/

    cout<<"Hello please enter number of rooms below"<<endl;
    int large_room{0};
    cout<<"Large rooms you want to be cleaned"<<endl;
    cin>>large_room;
    int small_room{0};
    cout<<"Small rooms you want to be cleaned"<<endl;
    cin>>small_room;

    cout<<"Price per large room is: "<<large_room*35<<endl;
    cout<<"Price per small room is : "<<small_room*25<<endl;

    cout<<"Total price of rooms to be cleaned: "<<((large_room*35)+(small_room*25))+(0.06*(large_room*35))+(0.06*(small_room*25))<<endl;

    return 0;
}
