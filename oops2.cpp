#include<iostream>
#include<string>
using namespace std;

class Employee
{
    public:
    string Name;
    string Company;
    int Age;

    void introduceyourself()
    {
        cout<<"Name- "<<Name<<endl;
        cout<<"Company- "<<Company<<endl;
        cout<<"Age- "<<Age<<endl<<endl;
    }
    Employee(string name,string company,int age)
    {
        Name=name;
        Company=company;
        Age=age;
    }
};






int main()
{

    Employee employee1=Employee("Arnab","Amazon",25);
   // employee1.Name="Arnab";
    //employee1.Company="Microsoft";
    //employee1.Age=21;
    employee1.introduceyourself();

    Employee employee2=Employee("John","Amazon",35);
    //employee2.Name="John";
    //employee2.Company="Microsoft";
    //employee2.Age=23;
    employee2.introduceyourself();
    return 0;
}
