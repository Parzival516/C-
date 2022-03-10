#include <iostream>
#include <string>
using namespace std;
int main() 
{
// int number;
// cin>>number;


string name;



    while (name.empty())
    {
        cout<<"Please enter yoru name"<<endl;
        getline(cin, name);
    }
    cout<<"Welcome "<<name<<endl;
    
    return 0;
}