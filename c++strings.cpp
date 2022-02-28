#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};
    string s6{s1,0,3};
    string s7(10,'X');

    cout<<s0<<endl;
    cout<<s6.length()<<endl;
    return 0;
}
