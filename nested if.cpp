#include <iostream>
using namespace std;
int main()
{
   int score{};
   cout<<"Enter your score on the exam:(0 to 100) "<<endl;
   cin>>score;
   char letter_grade{};

   if(score>=0&&score<=100)
   {
       if(score>90)
        letter_grade='A';
       else if(score>80)
        letter_grade='B';
       else if(score>70)
        letter_grade='C';
       else if(score>60)
        letter_grade='D';
       else
        letter_grade='D';

        cout<<"Your grade is "<<letter_grade<<endl;

       if(letter_grade=='F')
        cout<<"Sorry you are stupid"<<endl;
       else
       cout<<"You passed :)"<<endl;


   }
   else
   {
       cout<<"sorry "<<score<<" is not in range"<<endl;
   }

    return 0;
}
