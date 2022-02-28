#include <iostream>
using namespace std;
int main()
{
string name="name";
int age=100;
string* pName=&name;
int* pAge=&age;

cout<<pName<<endl;
cout<<pAge<<endl;



    return 0;
}