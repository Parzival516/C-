#include<iostream>
using namespace std;

class Human
{
public:
string name;
int age;
double weight;

void eat()
{
    cout<<"This person is eating";
}
void drink()
{
    cout<<"This person is drinking";
}
void sleep()
{
    cout<<"This person is sleeping";
}

};




int main()
{

Human human1;
human1.name="Rick";
human1.age=65;
cout<<human1.age<<endl;
cout<<human1.name<<endl;



Human human2;
human2.name="Morty";
human2.age=15;
cout<<human2.age<<endl;
cout<<human2.name<<endl;
cout<<endl;



    return 0;
}