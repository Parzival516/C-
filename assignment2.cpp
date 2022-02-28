#include <iostream>
#include <fstream>
using namespace std;
class Employee
{
     private:
          int empid1;
          string empname1;
          float salary1;
          int empid2;
          string empname2;
          float salary2;
          int empid3;
          string empname3;
          float salary3;
          int empid4;
          string empname4;
          float salary4;
          int empid5;
          string empname5;
          float salary5;
     public:
          int emp_details()
          {
               empid1=1;
               empname1="ABC";
               salary1=10000.0;

               empid2=2;
               empname2="DEF";
               salary2=20000.0;

               empid3=3;
               empname3="GHI";
               salary3=30000.0;

               empid4=4;
               empname4="JKL";
               salary4=40000.0;

               empid5=5;
               empname5="MNO";
               salary5=50000.0;
          }
          int show()
          {
               cout<<"Employee Id : "<<empid1<<endl;
               cout<<"Employee Name : "<<empname1<<endl;
               cout<<"Employee Salary : "<<salary1<<endl;
               cout<<endl;
               cout<<"Employee Id : "<<empid2<<endl;
               cout<<"Employee Name : "<<empname2<<endl;
               cout<<"Employee Salary : "<<salary2<<endl;
               cout<<endl;
               cout<<"Employee Id : "<<empid3<<endl;
               cout<<"Employee Name : "<<empname3<<endl;
               cout<<"Employee Salary : "<<salary3<<endl;
               cout<<endl;
               cout<<"Employee Id : "<<empid4<<endl;
               cout<<"Employee Name : "<<empname4<<endl;
               cout<<"Employee Salary : "<<salary4<<endl;
               cout<<endl;
               cout<<"Employee Id : "<<empid5<<endl;
               cout<<"Employee Name : "<<empname5<<endl;
               cout<<"Employee Salary : "<<salary5<<endl;
               cout<<endl;
          }
};
int main()
{
     Employee e;
    e.emp_details();
    e.show();

    fstream myFile;

    myFile.open("assignment2.txt",ios::out);
    if (myFile.is_open())
    {
        myFile<<e.emp_details();
        myFile<<e.show();
        myFile.close();
    }

    myFile.open("assignment2.txt",ios::app);
    if (myFile.is_open())
    {
        myFile<<"I appened this text";
    }

    myFile.open("assignment2.txt",ios::ate);
    if (myFile.is_open())
    {
        myFile<<"Itll move the readwrite control to the end";
    }

    myFile.open("assignment2.txt",ios::trunc);
    if (myFile.is_open())
    {
        myFile<<"All contents will now be truncated";
    }

    myFile.open("assignment2.txt",ios::in);
    if (myFile.is_open())
    {
        myFile<<"Open the file for reading";
    }

}
