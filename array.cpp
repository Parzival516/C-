#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
//string cars[]={"corvette","bmw","tesla","audi"};

//for(int i=0; i<sizeof(cars); i++)
//{

//    cout<<" "<<cars[i];
//}

cout<<"How many cars do you have?";
int number;
cin>>number;
cin.ignore();

string* pCars=new string[number];

for (int i = 0; i < number; i++)
{
    cout<<"Enter car #"<<i+1<<" "<<endl;

    getline(cin,pCars[i]);
}
cout<<"Here is your garage!"<<endl;
cout<<"==============="<<endl;
for (int i = 0; i < number; i++)
{
    cout<<"parking spot number#"<<i+1<<" "<<pCars[i]<<endl;
}






    return 0;
}