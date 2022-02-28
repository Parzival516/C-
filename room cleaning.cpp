#include <iostream>
using namespace std;
int main()
{
    //Carpet Cleaning Service
    //Charges $30 per room
    //Sales tax rate is 6%
    //Estimates are valid for 30 days


    //Prompt the user to enter the number of rooms
    //Display number of rooms
    //Display price per room

    //Display cost:(number of rooms*price per room)
    //Display tax:number of rooms*price per room*tax rate
    //Display total estimate:(number of rooms*price per room)+(number of rooms*price per room*tax rate)
    //Display estimate expiration time
    cout<<"Hello, welcome to my carpet cleaning service"<<endl;
    cout<<"How many rooms you want to be cleaned"<<endl;

    int room_number{0};
    cin>>room_number;

    cout<<"\nEstimate for carpet cleaing service"<<endl;
    cout<<"Number of rooms: "<<room_number<<endl;
    cout<<"Price per room:$ "<<30<<endl;
    cout<<"Cost:$"<<30*room_number<<endl;

    cout<<"Tax:$"<<30*room_number*0.06<<endl;
    cout<<"====================="<<endl;
    cout<<"Total estimate:$"<<(30*room_number)+(30*room_number*0.06)<<endl;
    cout<<"This estimate is valid for "<<30<<" days"<<endl;
    return 0;
}
