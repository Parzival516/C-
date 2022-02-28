#include <iostream>
using namespace std;
int main()
{

 char letter_grade{};
 cout<<"Enter the grade you expect on the exam: "<<endl;
 cin>>letter_grade;

 switch(letter_grade)
 {
 case'a':
 case'A':
     cout<<"You need 90 or above, study hard"<<endl;
     break;

     case'b':
     case'B':
     cout<<"You need 90-90, study hard"<<endl;
     break;

     case'c':
     case'C':
     cout<<"You need 70-79 or average, study hard"<<endl;
     break;

     case'd':
 case'D':
     cout<<"You you should go for higher grade, or get 60-69"<<endl;
     break;

     case'f':
 case'F':
     {
         char confirm{};
         cout<<"Are you sure Y/N?"<<endl;
         cin>>confirm;

         if(confirm=='y'||confirm=='Y')
            cout<<"Ok, i guess you didnt want to study"<<endl;
         else if(confirm=='n'||confirm=='N')
            cout<<"ok go study!"<<endl;
         else
            cout<<"Illegal choice"<<endl;


         break;
     }


 default:
    cout<<"Sorry, not a valid grade"<<endl;
 }






















    return 0;
}
