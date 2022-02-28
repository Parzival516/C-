#include <iostream>
using namespace std;
//STUDENT Class
class Student{
    int usn;
    char name[20];
    float test1, test2, test3, sum, avg, marks1, marks2;
public:
    // INPUT Function
    void input(){
        cout<< "Enter USN: "<<endl;
        cin>> usn;
        cout<< "Enter Student Name: "<<endl;
        cin>> name;
        cout<< "Enter Test1, Test2 and Test3 Marks: "<<endl;
        cin>> test1>> test2>> test3;
        if((test1>test2) && (test1>test3)){
            marks1 = test1;
            if(test2 > test3)
                marks2 = test2;
            else
                marks2 = test3;
        }
        else if((test2>test1) && (test2>test3)){
            marks1 = test2;
            if(test1>test3)
                marks2 = test1;
            else
                marks2 = test3;
        }
        else{
            marks1 = test3;
            if(test1 > test2)
                marks2 = test1;
            else
                marks2 = test2;
        }
        avg = (marks1 + marks2) / 2;
    }
    // Display Function
    void display(){
        cout<<endl <<usn <<"\t" <<name <<"\t" <<test1 <<"\t" <<test2 <<"\t" <<test3 <<"\t" <<avg <<endl;
    }
    getch();
};