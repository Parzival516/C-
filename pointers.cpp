#include <iostream>
using namespace std;
int main()
{

    // string name="Parzival";
    // int age=100;

string name="Parzival";
int age=100;

string* pName=&name;
int* pAge=&age;

cout<<pName<<endl;
cout<<pAge<<endl;

string food="pizza";

string* pFood=&food;
cout<<pFood<<endl;
    cout<<&name<<endl;
    cout<<&age<<endl;
    return 0;
}