#include<iostream>
using namespace std;
int main()
{
    char selection{};
    do{
            cout<<"\n====================="<<endl;
    cout<<"1.Do this"<<endl;
    cout<<"2.Do that"<<endl;
    cout<<"3.Do something else"<<endl;
    cout<<"Q.to quit"<<endl;
    cout<<"Enter your selection: ";
        cin>>selection;

        if(selection=='1')
            cout<<"You chose 1-doing this"<<endl;
        else if(selection=='2')
            cout<<"You chose 2-doing that"<<endl;
        else if(selection==3)
            cout<<"You choose 3-doing something else"<<endl;
        else if(selection=='Q'||selection=='q')
            cout<<"Goodbye..."<<endl;
        else
            cout<<"Unknown option===try again"<<endl;
    }
    while(selection!='q'&&selection!='Q');

    return 0;
}
