#include<iostream>
#include<string>
using namespace std;


class Employee//making a class employee
{
    int id;
    string name;
    string department;

   int salary1;//these three salaries will be taken as input and will be compared with each other
   int salary2;
   int salary3;


public:
    void reading(void);//reading function
    void calculating(void);//calculation function
};

void Employee::reading(void)
{
    cout<<"Enter your id: ";//taking the inputs
    cin>>id;
    cout<<"\nEnter your first name: ";
    cin>>name;
    cout<<"\nEnter your department: ";
    cin>>department;
    cout<<"\nNow enter enter 3 salaries separated by space: ";//taking the three salary input
    cin>>salary1>>salary2>>salary3;
}

void Employee::calculating(void)
{

    if(salary1>=0)//driver if statement to let the variables enter my condition(as long as the user dosnt input negative numbers we are fine)
    {


        if(salary1>salary2&&salary1>salary3)//logic for highest salary will be comparing 1 salary to the other two and if its bigger then output that salary
        cout<<"Salary 1 is highest "<<endl;//otherwise itll pass onto next else if statement
        else if(salary2>salary1&&salary2>salary3)
            cout<<"Salary 2 is the highest and "<<endl;
        else if(salary3>salary1&&salary3>salary2)
            cout<<"salary 3 is the highest and "<<endl;
    }


    if(salary1>=0)//again a driver if statement to just let the variables enter the condition
    {


        if(salary1<salary2&&salary1<salary3)//same here again im comparing 1 salary to other two and if its less than other two then its the smallest
            cout<<"Salary 1 is the lowest"<<endl;

            else if(salary2<salary1&&salary2<salary3)
                cout<<"Salary 2 is the lowest"<<endl;
            else if(salary3<salary1&&salary3<salary2)
                cout<<"salary 3 is the lowest"<<endl;
    }

    else
        cout<<"invalid input"<<endl;//if user inputs anything else positive integer or 0 then invalid
}






int main()
{

    Employee a;
    a.reading();//firing read function
    a.calculating();//firing calc function




    return 0;
}

